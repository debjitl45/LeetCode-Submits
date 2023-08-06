class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> v;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                string s="";
                if(__gcd(i,j)==1)
                {
                    s=to_string(i)+"/"+to_string(j);
                    v.push_back(s);
                }
            }
        }
        return v;
    }
};