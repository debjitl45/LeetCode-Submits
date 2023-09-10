class Solution {
public:
    int f(int n,vector<int>& v,int t,vector<int>& dp)
    {
        if(t==0)
        return 1;

        if(t<0)
        return 0;

        if(dp[t]!=-1)
        return dp[t];

        int take=0;
        for(int j=0;j<n;j++)
        {
            take+=f(n,v,t-v[j],dp);
        }
        return dp[t]=take;
    }
    int combinationSum4(vector<int>& v, int t) {
        vector<int> dp(t+1,-1);
        return f(v.size(),v,t,dp);
    }
};