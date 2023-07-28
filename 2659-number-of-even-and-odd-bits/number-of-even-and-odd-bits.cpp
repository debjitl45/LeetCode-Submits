class Solution {
public:
    vector<int> evenOddBit(int n) {
        int e=0,o=0;
        for(int i=0;n>0;i++)
        {
            if(n%2==1)
            {
                if(i%2==0)
                e++;
                else
                o++;
            }
            n>>=1;
        }
        return {e,o};
    }
};