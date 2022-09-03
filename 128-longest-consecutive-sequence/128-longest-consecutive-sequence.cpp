// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) 
//     {
//         int cnt=1,mx=0;
//         sort(nums.begin(),nums.end());
//         if(nums.size()==0)
//             return 0;
//         for(int i=1;i<nums.size();i++)
//         {
//             if(nums[i]==nums[i-1]+1)
//                 cnt++;
//             else if(nums[i]!=nums[i-1]+1)
//             {
//                 mx = max(mx,cnt);
//                 cnt=1;
//             }
//             cout<<nums[i]<<" "<<nums[i+1]<<endl;
//             cout<<cnt<<" "<<max<<endl;
//         }
//         mx=max(mx,cnt);
//         return mx;
//     }
// };
class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size(); 
        if(n == 0) return 0;
        
        sort(arr.begin(), arr.end());
        
        int mxLen = 0, currLen = 1; 
        
        for(int i = 1; i < n; i++) 
        {
            if(arr[i] == arr[i - 1] + 1) 
            {
                currLen++; 
            }
            else if(arr[i] != arr[i - 1])
            {
                mxLen = max(mxLen, currLen);
                currLen = 1;
            }
        }
        mxLen = max(mxLen, currLen);
        return mxLen;
    }
};