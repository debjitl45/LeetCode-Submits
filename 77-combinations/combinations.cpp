class Solution {
public:
    vector<vector<int>> ans;
    void helper(int idx,int k,vector<int>& ds,int n)
    {
        if(ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }

        for(int i=idx;i<n+1;i++)
        {
            ds.push_back(i);
            helper(i+1,k,ds,n);
            ds.pop_back();
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        helper(1,k,ds,n);
        return ans;
    }
};