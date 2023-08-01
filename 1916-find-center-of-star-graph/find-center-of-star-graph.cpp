class Solution {
public:
    int findCenter(vector<vector<int>>& v) {
        for(int i=1;i<v.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                if(v[i][j]==v[j][0] || v[i][j]==v[j][1])
                return v[i][j];
            }
        }
        return 0;
    }
};