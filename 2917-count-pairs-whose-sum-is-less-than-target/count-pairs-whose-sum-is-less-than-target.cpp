class Solution {
public:
    int countPairs(vector<int>& v, int t) {
        int cnt=0,n=v.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i]+v[j]<t)
                cnt++;
            }
        }
        return cnt;
    }
};