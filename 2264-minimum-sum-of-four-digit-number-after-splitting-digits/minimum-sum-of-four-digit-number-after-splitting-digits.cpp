class Solution {
public:
    int minimumSum(int n) {
        vector<int> dig;
        int rem=0;
        while(n>0)
        {
            rem=n%10;
            dig.push_back(rem);
            n=n/10;
        }
        sort(dig.begin(),dig.end());
        return (dig[0]*10)+dig[2] + (dig[1]*10)+dig[3];
    }
};