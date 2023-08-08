class Solution {
public:
    bool isGoodArray(vector<int>& v) {
        int n=v.size(),hcf=v[0];
        for(int i=1;i<n;i++)
        {
            hcf=__gcd(v[i],hcf);
        }
        if(hcf==1)
        return true;

        return false;
    }
};