class Solution {
public:
    void helper(vector<int>& v,vector<int>& ds,vector<vector<int>>& ans,int idx)
    {
        ans.push_back(ds);
        for(int i=idx;i<v.size();i++)
        {
            ds.push_back(v[i]);
            helper(v,ds,ans,i+1);
            ds.pop_back();
        }
        return;
    }
    int xorGen(vector<vector<int>>& v)
    {
        int temp=0;
        vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                temp=temp^v[i][j];
            }
            ans.push_back(temp);
            temp=0;
        }
        int sum=0;
        for(int x:ans)
        {
            sum+=x;
        }
        return sum;
    }
    int subsetXORSum(vector<int>& v) {
        vector<int> ds;
        vector<vector<int>> ans;
        int idx=0;
        helper(v,ds,ans,idx);
        return xorGen(ans); 
    }
};