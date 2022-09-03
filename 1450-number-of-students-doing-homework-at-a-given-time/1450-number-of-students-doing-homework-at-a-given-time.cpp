class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) 
    {
        int cnt=0;
        for(int i=0;i<startTime.size();i++)
        {
            for(int j=0;j<endTime.size();j++)
            {
                if(i==j)
                {
                    if(startTime[i]<=queryTime&&endTime[j]>=queryTime)
                       cnt++; 
                }
            }
        }
        return cnt;
    }
};