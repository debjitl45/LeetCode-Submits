class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
        int row=v.size(),col=v[0].size(),r=0,c=col-1,ans=0;
        while(r<row && c>=0)
        {
            int x=v[r][c];
            if(x<0)
            {
                ans+=(row-r);
                c--;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};