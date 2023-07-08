class Solution {
public:
    int minimumDifference(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int diff=INT_MAX,n=v.size();
        for(int i=0;i<=n-k;i++)
        {
            diff=min(diff,v[i+k-1]-v[i]);
        }
        return diff;        
    }
};