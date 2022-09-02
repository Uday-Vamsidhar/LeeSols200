class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int ans;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<endl;
        }
        cout<<endl;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i==k-1)
            {
                ans=nums[i];
                goto ender;
            }
        }
        ender:
            return ans;
    }
};