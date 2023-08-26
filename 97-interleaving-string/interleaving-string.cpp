class Solution {
public:
    bool solve(string s1, string s2, string s3,int idx1,int idx2,vector<vector<int>>&dp)
    {
        if(idx1+idx2==s3.size()) return 1;
        if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
        bool ans=0;
        if(idx1<s1.size() && s1[idx1]==s3[idx1+idx2])
        ans=(ans|solve(s1,s2,s3,idx1+1,idx2,dp));
        if(idx2<s2.size() && s2[idx2]==s3[idx1+idx2])
        ans=(ans|solve(s1,s2,s3,idx1,idx2+1,dp));
        return dp[idx1][idx2]=ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size()) return false;
        vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(s1,s2,s3,0,0,dp);
    }
};