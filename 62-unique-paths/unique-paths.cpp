class Solution {
public:
    int dp[102][102];
    int uniquePaths(int m, int n) {
        for(int i=0;i<n;i++)
            dp[m-1][i]=1;
        for(int j=0;j<m;j++)
            dp[j][n-1]=1;
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=m-2;j>=0;j--)
            {
                dp[j][i]=dp[j+1][i]+dp[j][i+1];
            }
        }
        return dp[0][0];
    }
};