class Solution {
public:
    double findMaxAverage(vector<int>& v, int k) {
        double sum=0,ans=0;
        int n=v.size();
        for(int i=0;i<k;i++)
        {
            sum+=v[i];
        }
        ans=sum;
        for(int i=k;i<n;i++)
        {
            sum+=v[i]-v[i-k];
            ans=max(ans,sum);
        }
        return ans/k;
    }
};