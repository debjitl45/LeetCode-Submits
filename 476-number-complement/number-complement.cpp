class Solution {
public:
    int countBits(int n)
    {
        int cnt=0;
        while(n>0)
        {
            cnt++;
            n=n>>1;
        }
        return cnt;
    }
    int findComplement(int num) {
        int cnt=countBits(num);
        for(int i=0;i<cnt;i++)
        {
            num=num^(1<<i);
        }
        return num;
    }
};