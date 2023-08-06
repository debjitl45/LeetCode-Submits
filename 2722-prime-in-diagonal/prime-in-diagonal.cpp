class Solution {
public:
    bool isPrime(int n)
    {
        if(n<=1)
        return false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& v) {
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(isPrime(v[i][i]))
            {
                ans=max(ans,v[i][i]);
            }
            if(isPrime(v[i][v.size()-1-i]))
            {
                ans=max(v[i][v.size()-1-i],ans);
            }
        }
        return ans;
    }
};