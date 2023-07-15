class Solution {
public:
    int helper(vector<int>&v,int t)
    {
        int n=v.size(),cnt=0,i=0,j=0,sum=0;
        while(j<n)
        {
            sum+=v[j];
            while(i<=j && sum>t)
            {
                sum-=v[i++];
            }
            cnt+=j-i+1;
            j++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& v, int t) {
        return helper(v,t)-helper(v,t-1);
    }
};