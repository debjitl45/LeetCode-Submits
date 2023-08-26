class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in(n+1,0), out(n+1,0);
        for(int i=0;i<trust.size();i++)
        {
            out[trust[i][0]]+=1;
            in[trust[i][1]]+=1;
        }
        int ans=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            if(out[i]==0)
            {
                ans=i;
                break;
            }
        }
        if(ans==INT_MIN) return -1;
        if(in[ans]==n-1) return ans;
        return -1;
    }
};