class Solution {
public:
    int mySqrt(int n) {
        long sqrt=0;
        if(n==1 || n==0)
            return n;
        long low=1,high=n,mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid*mid==n)
            {
                sqrt=mid;
                break;
            }
            else if(mid*mid<n)
            {
                sqrt=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return sqrt;
    }
};