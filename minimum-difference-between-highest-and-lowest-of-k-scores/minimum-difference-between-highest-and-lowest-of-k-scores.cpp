class Solution {
public:
    int minimumDifference(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int i=0,j=k-1,n=v.size(),diff=INT_MAX;
        while(j<n)
        {
            diff=min(diff,v[j]-v[i]);
            i++;
            j++;
        }
        return diff;
    }
};