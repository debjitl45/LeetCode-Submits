class Solution {
public:
    int findGCD(vector<int>& v) {
        int ans=0,mn=INT_MAX,mx=INT_MIN,n=v.size();
        for(int i=0;i<n;i++)
        {
            mn=min(mn,v[i]);
            mx=max(mx,v[i]);
        }
        ans=__gcd(mn,mx);
        return ans;
    }
};