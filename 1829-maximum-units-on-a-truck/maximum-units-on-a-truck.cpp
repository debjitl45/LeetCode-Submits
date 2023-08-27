class Solution {
    static bool cmp(vector<int>& v1, vector<int>& v2)
    {
        return v1[1]>v2[1];
    }
public:    
    int maximumUnits(vector<vector<int>>& v, int sz) {
        sort(v.begin(),v.end(),cmp);
        int cap=0,n=v.size();
        for(int i=0;i<n;i++)
        {
            if(v[i][0]<=sz)
            {
                sz-=v[i][0];
                cap+=v[i][0]*v[i][1];
            }
            else
            {
                cap+=sz*v[i][1];
                break;
            }
        }
        return cap;
    }
};