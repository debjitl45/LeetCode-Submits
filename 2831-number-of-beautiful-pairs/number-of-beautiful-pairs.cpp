class Solution {
public:
    int countBeautifulPairs(vector<int>& v) {
        int cnt=0,n=v.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(to_string(v[i])[0]-'0',v[j]%10)==1)
                cnt++;
            }
        }
        return cnt;
    }
};