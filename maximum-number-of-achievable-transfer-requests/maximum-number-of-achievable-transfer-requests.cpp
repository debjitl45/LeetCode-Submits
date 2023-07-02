class Solution {
public:
    void helper(vector<vector<int>>& req,int idx,vector<int>& cnt,int curr,int& maxCnt)
    {
        if(idx==req.size())
        {
            for(int i=0;i<cnt.size();i++)
            {
                if(cnt[i])
                return;
            }
            maxCnt=max(maxCnt,curr);
            return;
        }
        int from=req[idx][0],to=req[idx][1];
        cnt[from]--; 
        cnt[to]++;
        helper(req,idx+1,cnt,curr+1,maxCnt);
        cnt[from]++; 
        cnt[to]--;
        helper(req,idx+1,cnt,curr,maxCnt);
    }
    int maximumRequests(int n, vector<vector<int>>& req) {
        vector<int> cnt(n);
        int maxCnt=0;
        helper(req,0,cnt,0,maxCnt);
        return maxCnt;
    }
};