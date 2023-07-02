class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char t) {
        int low=0,mid=0,high=v.size()-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(v[mid]>t)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low==v.size()?v[0]:v[low];
    }
};
