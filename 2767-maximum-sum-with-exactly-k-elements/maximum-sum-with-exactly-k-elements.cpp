class Solution {
public:
    int maximizeSum(vector<int>& v, int k) {
        int sum=0,mx=INT_MIN;
        for(int x:v)
        {
            mx=max(x,mx);
        }
        while(k--)
        {
            sum+=mx++;
        }
        return sum;
    }
};