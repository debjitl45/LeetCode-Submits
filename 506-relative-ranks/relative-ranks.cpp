class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& v) {
        vector<string> ans(v.size());
        vector<pair<int,int>> vp;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            vp.push_back(make_pair(v[i],i));                        
        }
        sort(vp.rbegin(),vp.rend());
        for(int i=0;i<vp.size();i++)
        {
            if(i==0) ans[vp[i].second]="Gold Medal";
            else if(i==1) ans[vp[i].second]="Silver Medal";
            else if(i==2) ans[vp[i].second]="Bronze Medal";
            else ans[vp[i].second]=to_string(i+1);
        }
        return ans;
    }
};