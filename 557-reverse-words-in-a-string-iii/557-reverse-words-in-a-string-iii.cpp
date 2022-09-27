class Solution {
public:
    string reverseWords(string s) 
    {
        string temp="";
        vector<string> hold;
        char l=s[s.length()-1];
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                hold.push_back(temp);
                temp="";
            }
            if(i==s.length()-1)
            {
                temp+=l;
                hold.push_back(temp);
                temp="";
            }
            temp+=s[i];
        }
        
        for(int i=0;i<hold.size();i++)
            cout<<hold[i];
        
        string t="";
        vector<string> newhold;
        
        
        for(int j=0;j<hold.size();j++)
        {
            for(int k=hold[j].length()-1;k>=0;k--)
            {
                t+=hold[j][k];
            }
            newhold.push_back(t);
            t="";
        }
        
        
        string res="";
        
        
        for(int i=0;i<newhold.size();i++)
        {
            res+=newhold[i];
            if(i==0)
                res+=" ";
        }
        
        string rem="";
        for(int i=0;i<res.length()-1;i++)
        {
            rem+= res[i];
        }
        
        
        return rem;
    }
};