class Solution {
public:
    int countPairs(vector<int>& v, int t) {
        sort(v.begin(),v.end());
        int l=0,r=v.size()-1,cnt=0;
        while(l<r)
        {
            if(v[l]+v[r]<t)
            {
                cnt+=r-l;
                l++;
            }
            else
            {
                r--;
            }
        }
        return cnt;
    }
};