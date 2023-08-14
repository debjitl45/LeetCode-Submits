class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& v) {
        int m=v.size(),n=v[0].size();
        vector<priority_queue<int>> pq(m);

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                pq[i].push(v[i][j]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int res=0;
            for(int j=0;j<m;j++)
            {
                res=max(res,pq[j].top());
                pq[j].pop();
            }
            ans+=res;
        }
        return ans;

    }
};