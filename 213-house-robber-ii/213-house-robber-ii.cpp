class Solution {
public:
//     int solve(vector<int>& nums, int i, vector<int>& dp)
//     {
//         if(i>=nums.size()-1)
//             return 0;
//         if(dp[i]!=-1)
//             return dp[i];
//         return dp[i]=max(solve(nums,i+1,dp),nums[i]+solve(nums,i+2,dp));
//     } 
    
    int rob(vector<int>& nums) 
    {
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        
        vector<int> dp1,dp2;
        dp1.resize(nums.size()+1,-1);
        dp2.resize(nums.size()+1,-1);
        
        dp1[0]=nums[0];
        dp1[1]=nums[0];
        
        dp2[0]=0;
        dp2[1]=nums[1];
        
        for(int i=2;i<nums.size();i++)
        {
            dp1[i] = max(dp1[i-2]+nums[i],dp1[i-1]);
            dp2[i] = max(dp2[i-2]+nums[i],dp2[i-1]);
        }
        
        return max(dp1[nums.size()-2],dp2[nums.size()-1]);
        // vector<int> dp(nums.size()+1,-1);
        // vector<int> circle;
        // if(nums.size()%2==0)
        //     return solve(nums,0,dp);
        // else
        // {
        //     vector<int> dp1;
        //     if(nums[0]>nums[nums.size()-1])
        //     {
        //         for(int i=0;i<nums.size()-1;i++)
        //         {
        //             circle.push_back(nums[i]);
        //         }
        //     }
        //     else
        //     {
        //         for(int i=1;i<nums.size();i++)
        //         {
        //             circle.push_back(nums[i]);
        //         }
        //     }
        //     dp1.resize(circle.size()+1,-1);
        //     return solve(circle,0,dp1);
        // }
    }
};