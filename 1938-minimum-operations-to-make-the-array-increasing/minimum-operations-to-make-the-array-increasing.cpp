class Solution {
public:
    int minOperations(vector<int>& v) {
        int n=v.size(),ans=0,bar=v[0];
        for(int i=1;i<n;i++)
        {
            if(bar>=v[i])
            {
                ans+=(bar+1-v[i]);
                bar++;
            }
            else
            bar=v[i];
        }
        return ans;
    }
};