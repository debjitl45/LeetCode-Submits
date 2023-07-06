class Solution {
public:
    int minSubArrayLen(int t, vector<int>& v) {
        int i=0,j=0,sum=0,ans=INT_MAX;
        for(j=0;j<v.size();j++)
        {
            sum+=v[j];
            while(sum>=t)
            {
                ans=min(ans,j-i+1);
                sum-=v[i];
                i++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};