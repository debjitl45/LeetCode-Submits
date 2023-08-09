class Solution {
public:
    bool helper(vector<int>& v,int ans,int p,int n)
    {
       for(int i=0;i<n-1;i++)
       {
           if(v[i+1]-v[i]<=ans)
           {
               i++;
               p--;
           }   
       }
       return p<=0;
    }
    int minimizeMax(vector<int>& v, int p) {
        sort(v.begin(),v.end());
        int n=v.size();
        int l=0,r=1e9;
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