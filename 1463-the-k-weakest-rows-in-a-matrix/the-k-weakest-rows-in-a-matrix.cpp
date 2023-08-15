class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& v, int k) {
        vector<int> ans;
        vector<pair<int,int>> vp;
        for(int i=0;i<v.size();i++)
        {
            int cnt=0;
            for(int j=0;j<v[i].size();j++)
            {
                if(v[i][j])
                cnt++;
            }
            vp.push_back(make_pair(cnt,i));
        }
        sort(vp.begin(),vp.end());
        for(int i=0;i<k;i++)
        {
            ans.push_back(vp[i].second);
        }
        return ans;
    }
};