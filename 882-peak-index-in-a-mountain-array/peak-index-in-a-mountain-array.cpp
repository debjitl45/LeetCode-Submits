class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int low=1,mid=0,high=v.size()-2;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(v[mid-1]>v[mid] && v[mid]>v[mid+1])
                high=mid-1;
            else if(v[mid-1]<v[mid] && v[mid]<v[mid+1])
                low=mid+1;
            else
                return mid;
        }
        return mid;
    }
};