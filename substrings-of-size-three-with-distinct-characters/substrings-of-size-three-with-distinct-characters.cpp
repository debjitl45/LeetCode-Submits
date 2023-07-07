class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt=0,n=s.size();
        for(int i=2;i<n;i++)
        {
            if(s[i]!=s[i-1] && s[i]!=s[i-2] && s[i-1]!=s[i-2])
            cnt++;
        }
        return cnt;
    }
};