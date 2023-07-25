class Solution {
public:
    int numberOfSteps(int num) {
        int x=num,cnt=0;
        while(x>0)
        {
            cnt++;
            if(x%2==0)
            x=x/2;
            else
            x--;
        }
        return cnt;
    }
};