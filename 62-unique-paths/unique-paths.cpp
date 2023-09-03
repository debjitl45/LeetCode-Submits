class Solution {
public:
    int ncr(int n,int r)
    {
        long long int ans=1;
        for(int i=0;i<r;i++)
        {
            ans*=(n-i);
            ans/=(i+1);
        }
        return (int) ans;
    }
    int uniquePaths(int m, int n) {
        return ncr(m+n-2,min(n-1,m-1));
    }
};