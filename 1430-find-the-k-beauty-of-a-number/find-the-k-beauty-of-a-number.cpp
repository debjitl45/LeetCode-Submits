class Solution {
public:
    int divisorSubstrings(int n, int k) {
        string s=to_string(n);
        int sz=s.size(),ans=0;

        if(sz==k) return 1;

        for(int i=1;i<sz;i++)
        {
            if(sz-i>=k)
            {
                string str=s.substr(i-1,k);
                int val=stoll(str);
                if(val!=0) if(n%val==0) ans++;
            }
        }
        string str=s.substr(sz-k,k);
        int val=stoll(str);
        if(val!=0) if(n%val==0) ans++;
        return ans;
    }
};