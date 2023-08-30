class Solution {
public:
    long long minimumReplacement(vector<int>& v) {
        int n=v.size(),prev=v[n-1];
        long long res=0;
        for(auto i=n-2;i>=0;i--)
        {
            int tmp=((long long)v[i]+prev-1)/prev;
            if(v[i]%prev)
            prev=v[i]/tmp;
            res+=tmp-1;

        }
        return res;
    }
};