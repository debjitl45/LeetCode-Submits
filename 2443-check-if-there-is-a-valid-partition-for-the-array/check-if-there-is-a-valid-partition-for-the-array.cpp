class Solution {
public:
    bool solve(vector<int>& v, int i, vector<int>& dp){
        if(i==v.size()) return true;
        if(dp[i]!=-1) return dp[i];

        if(i+1<v.size() && v[i]==v[i+1])
        {
             if(solve(v,i+2,dp))
             return true;
        }
        if(i+2<v.size() && v[i]==v[i+1] && v[i]==v[i+2])
        {
             if(solve(v,i+3,dp))
             return true;
        }
        if(i+2<v.size() && v[i]==v[i+1]-1 && v[i]==v[i+2]-2)
        {
             if(solve(v,i+3,dp))
             return true;
        }
       return dp[i]=false;
    }
    bool validPartition(vector<int>& nums) {
         vector<int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
};