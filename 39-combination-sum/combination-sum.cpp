class Solution {
public:
    vector<vector<int>> ans;
    void helper(int idx,int t,vector<int>& v,vector<int>& ds)
    {
        if(idx==v.size())
        {
            if(t==0)
            ans.push_back(ds);
            return;
        }
        if(v[idx]<=t)
        {
            ds.push_back(v[idx]);
            helper(idx,t-v[idx],v,ds);
            ds.pop_back();
        }
        helper(idx+1,t,v,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        vector<int> ds;
        int n=v.size();
        helper(0,t,v,ds);
        return ans;
    }
};