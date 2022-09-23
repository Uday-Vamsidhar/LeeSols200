class Solution {
public:
//     vector<int> findOriginalArray(vector<int>& changed) 
//     {
//         vector<int> res;
//         int cnt=0;
        
//         if(changed.size()%2!=0)
//             return {};
        
//         int sum=0;
//         for(int m=0;m<changed.size();m++)
//         {
//             if(changed[m]==0)
//                 sum+=changed[m];
//         }
//         if(sum==0)
//         {
//             for(int n=0;n<changed.size()/2;n++)
//                 res.push_back(changed[n]);
//             return res;
//         }
        
//         sort(changed.begin(),changed.end());
//         for(int i=0;i<changed.size();i++)
//         {
//             for(int j=0;j<changed.size();j++)
//             {
//                 if(i!=j)
//                 {
//                     cout<<changed[i]<<" "<<changed[j]<<endl;
//                     if(changed[i]*2==changed[j])
//                     {
//                         cout<<"."<<endl;
//                         changed[j]=-9;
//                         cnt++;
//                         res.push_back(changed[i]);
//                     }
//                 }
//             }
//         }
        
//         cout<<cnt<<" "<<changed.size()<<endl;
//         if(cnt==changed.size()/2)
//             return res;
//         return {};
    // }
    vector<int> findOriginalArray(vector<int>& changed) {
         map<int,int>mp;
        
        int n=changed.size();
        if(n%2==1)return {};
        for(int i=0;i<n;i++){
            mp[changed[i]]++;
        }
        vector<int>ans;
        sort(changed.begin(),changed.end());
        for(auto x:changed){

        if(mp[x]==0){
            continue;
        }
            if(mp[x*2]==0)return {};
                ans.push_back(x);
                mp[x]--;
            mp[x*2]--;
        }
        return ans;
    }
};