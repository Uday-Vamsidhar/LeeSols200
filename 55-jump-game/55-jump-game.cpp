class Solution {
public:
    vector<int> dp;
    bool solve(vector<int>& nums,int i)
    {
        if(i==nums.size()-1)
            return true;
        if(dp[i]!=-1)
            return dp[i];
        int r=i+nums[i];
        for(int k=i+1;k<=r;k++)
        {
             if(solve(nums,k))
             {
                return dp[i]=true;
             } 
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) 
    {
        dp.resize(nums.size()+1,-1);
        return solve(nums,0);
    }
};