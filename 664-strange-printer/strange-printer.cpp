class Solution {
public:
    int strangePrinter(string s) {
        int n=s.size();
        vector dp(n,vector<int>(n,n));
        for(int sz=1;sz<=n;sz++)
        {
            for(int left=0;left<=n-sz;left++)
            {
                int right=left+sz-1;
                int j=-1;
                for(int i=left;i<right;i++)
                {
                    if(s[i]!=s[right] && j==-1)
                    j=i;
                    if(j!=-1)
                    dp[left][right]=min(dp[left][right],1+dp[j][i]+dp[i+1][right]);
                }
                if(j==-1)
                dp[left][right]=0;
            }
        }
        return dp[0][n-1]+1;
    }
};