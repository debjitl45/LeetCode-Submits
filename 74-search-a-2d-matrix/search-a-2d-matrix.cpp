class Solution {
public:
    bool bs(vector<int>& v,int t)
    {
        int low=0,high=v.size()-1,mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(v[mid]==t)
            return true;
            else if(v[mid]>t)
            high=mid-1;
            else
            low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& v, int t) {
        for(int i=0;i<v.size();i++)
        {
            if(bs(v[i],t))
            return true;
        }
        return false;
    }
};