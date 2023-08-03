class Solution {
public:
    int countDigitOne(int n) {
        int ones=0;
        for(long long i=1;i<=n;i*=10)
        {
            ones+=(n/i+8)/10 * i+(n/i % 10 == 1)*(n%i+1);
        }
        return ones;
    }
};