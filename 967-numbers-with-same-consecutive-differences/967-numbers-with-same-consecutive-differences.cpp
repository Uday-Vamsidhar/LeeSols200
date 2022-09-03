class Solution {
public:
    vector<int> ans;
    void check(int i, int k, int n)
    {
        if(n==1)
        {
            ans.push_back(i);
            return;
        }
        if(i%10-k>=0)
            check(i*10+(i%10-k),k,n-1);
        if(k)
        {
            if(i%10+k<10)
                check(i*10+(i%10+k),k,n-1);
        }               
    }
    vector<int> numsSameConsecDiff(int n, int k) 
    {
        for(int i=1;i<=9;i++)
            check(i,k,n);
        return ans;
    }
};