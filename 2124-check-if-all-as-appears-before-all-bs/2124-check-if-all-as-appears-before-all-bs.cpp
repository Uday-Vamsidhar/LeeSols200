class Solution {
public:
    bool checkString(string s) 
    {
        int pos=99999;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='b')
                pos=i;
            if(s[i]=='a'&&i>pos)
                return false;
        }
        return true;
    }
};