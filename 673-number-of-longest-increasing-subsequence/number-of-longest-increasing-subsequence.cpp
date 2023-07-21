class Solution {
public:
    int findNumberOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int>lis(n,0),fq(n,0);
        lis[0]=1; fq[0]=1;
        int lo=1;

        for(int i=1;i<n;i++)
        {
            int mx=0;
            int c=1;
            for(int j=0;j<i;j++)
            {
                if(v[j]<v[i])
                {
                    if(lis[j]>mx)
                    {
                        mx=lis[j];
                        c=fq[j];
                    }
                    else if(lis[j]==mx)
                    c=c+fq[j];
                }
            }
            fq[i]=c;
            lis[i]=mx+1;
            if(lo<lis[i]) lo=lis[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(lis[i]==lo)
            cnt+=fq[i];
        }
        return cnt;
    }
};