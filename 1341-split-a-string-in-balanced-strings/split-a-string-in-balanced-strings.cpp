class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0,ans=0;
        for(auto x:s)
        {
            if(x=='L') cnt++;
            else cnt--;
            if(cnt==0)
            ans++;
        }
        return ans;
    }
};