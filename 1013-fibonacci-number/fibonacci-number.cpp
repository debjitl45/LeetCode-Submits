class Solution {
public:
    int dp[50]={0,1};
    int fib(int n) {
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-2]+dp[i-1];
        }
        return dp[n];
    }
};