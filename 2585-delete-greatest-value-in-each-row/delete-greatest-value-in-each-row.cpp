class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        for(int j=0;j<m;j++)
        {
            int mx=INT_MIN;
            for(int i=0;i<n;i++)
            {
                mx=max(mx,v[i][j]);
            }
            ans=ans+mx;
        }
        return ans;
    }
};