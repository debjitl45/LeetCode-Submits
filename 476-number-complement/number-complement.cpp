class Solution {
public:
    int to_binary(int n)
    {
        int count=0;
        while(n>0)
        {
            count++;
            n=n>>1;
        }
        return count;
    }
    int findComplement(int num) {
        int rem=0,x=num;
        vector<int> bin;
        int cnt=to_binary(x);
        for(int i=0;i<cnt;i++)
        {
            num=num^(1<<i);
        }
        return num;        
    }
};