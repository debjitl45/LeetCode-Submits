class Solution {
public:
    bool helper(vector<int>& v, int mid, int p, int n)
    {
        for(int i=1;i<n;i++)
        {
            if(abs(v[i]-v[i-1])<=mid)
            {
                i++;
                p--;
            }
        }
        return p<=0;
    }
    int minimizeMax(vector<int>& v, int p) {
        int l=0,r=1e9,n=v.size();
        sort(v.begin(),v.end());
        while(l<=r)
        {
            int m=(l+r)/2;
            if(helper(v,m,p,n))
            r=m-1;
            else
            l=m+1;
        }
        return l;
    }
};