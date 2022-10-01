// class Solution {
// public:
    
//     vector<int> dp;
    
//     int numDecodings(string s) 
//     {
//         int n=s.length();
//         dp.resize(n,-1);
//         return ans(s,0,n);
//     }
    
//     int ans(string s, int i, int n)
//     {
//         if(i<n && s[i]=='0')
//             return 0;
//         if(i>=n)
//             return 1;
        
//         if(dp[i]!=-1)
//             return dp[i];
        
//         int w=0;
        
//         if(s[i]!='0')
//             w += ans(s,i+1,n);
        
//         if((i+1<n) && ((s[i]=='1' && s[i+1]<='9') || (s[i]=='2'&&s[i+1]<7)))
//             w +=ans(s,i+2,n);
        
//         return dp[i]=w;
//     }
// };
class Solution {
public:
    
    int dp[102];
    int decode(string& s, int idx, int n)
    {
        if(idx < n && s[idx] == '0') return 0;
        if(idx >= n)
            return 1;
        
        if(dp[idx] != -1) return dp[idx];
        
        int ways = 0;
        
        // Pick single
        if(s[idx] != '0') ways = decode(s, idx+1, n);
            
        // Pick couple
        if(idx+1 < n && ((s[idx] == '1' && s[idx+1] <= '9') || (s[idx]=='2' && s[idx+1] < '7')))
           ways += decode(s, idx+2, n);
           
        return dp[idx] = ways;
    }
    
    int numDecodings(string s) {
       
        int n = s.size();
        memset(dp, -1, sizeof(dp));
        return decode(s, 0, n);
    }
};