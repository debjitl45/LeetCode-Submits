class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& v) {
        int low=0,high=v.size(),mid=0,ans=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(canWalk(v,row,col,mid))
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
    bool canWalk(vector<vector<int>>& v,int row,int col,int mid)
    {
        vector<vector<bool>> res(row,vector<bool>(col,0));
        for(int i=0;i<mid;i++)
        {
            res[v[i][0]-1][v[i][1]-1]=1;
        }
        queue<pair<int,int>> q;
        for(int c=0;c<col;c++)
        {
            if(res[0][c]==0)
            {
                q.push({0,c});
                res[0][c]=1;
            }
        } 
        int dr[]={-1,1,0,0};
        int dc[]={0,0,1,-1};
        while(!q.empty())
        {
            auto[r,c]=q.front();
            q.pop();
            if(r==row-1) return true;
            for(int i=0;i<4;i++)
            {
                int nr=r+dr[i],nc=c+dc[i];
                if(nr<0 || nr==row || nc<0 || nc==col || res[nr][nc]==1) continue;
                res[nr][nc]=1;
                q.push({nr,nc});
            }
        }
        return false;
    }
};