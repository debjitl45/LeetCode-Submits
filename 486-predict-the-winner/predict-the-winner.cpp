class Solution {
public:
    int maxDiff(vector<int>& v,int l,int r,int n)
    {
        if(l==r)
        return v[l];

        int sL=v[l]-maxDiff(v,l+1,r,n);
        int sR=v[r]-maxDiff(v,l,r-1,n);

        return max(sL,sR);

    }
    bool PredictTheWinner(vector<int>& v) {
        int n=v.size();
        return maxDiff(v,0,n-1,n)>=0;
    }
};