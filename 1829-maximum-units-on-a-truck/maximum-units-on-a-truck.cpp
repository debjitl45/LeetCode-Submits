class Solution {
public:
    static bool cmp(vector<int>& v1,vector<int>& v2)
    {
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& v, int sz) {
        int ans=0,n=v.size();
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++)
        {
            if(v[i][0]<=sz)
            {
                sz-=v[i][0];
                ans+=v[i][0]*v[i][1];
            }
            else
            {
            ans+=v[i][1]*sz;
            break;
            }
        }
        return ans;
    }
};