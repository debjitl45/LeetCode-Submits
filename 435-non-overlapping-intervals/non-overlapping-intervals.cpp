bool cmp(vector<int>& a,vector<int>& b)
{
    return a[1]<b[1];
}
class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        int n=v.size();
        sort(v.begin(),v.end(),cmp);
        int ans=0;
        int k=INT_MIN;

        for(int i=0;i<n;i++)
        {
            int x=v[i][0]; int y=v[i][1];

            if(x>=k)
            k=y;
            else
            ans++;
        }
        return ans;
    }
};