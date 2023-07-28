class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n=v.size();
        long long sumExp=(long long)n*(long long)(n+1)/2;
        long long sumAct=0;
        int flag=0;
        for(int x:v)
        {
            if(x==0)
            {
            flag=1;
            }
            sumAct+=x;
        }
        if(flag==0) return 0;

        return sumExp-sumAct; 
    }
};