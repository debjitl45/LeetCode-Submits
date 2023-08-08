class Solution {
public:
    int subarrayGCD(vector<int>& v, int k) {
        int ans=0,n=v.size();
        for(int x:v)
        {
            if(x==k) ans++;
        }

        for(int i=0;i<n;i++)
        {
            int hcf=v[i];
            for(int j=i+1;j<n;j++)
            {
                if(v[j]%k>0)
                break;
                hcf=__gcd(hcf,v[j]);
                if(hcf==k)
                ans++;
            }
        }
        return ans;
    }
};