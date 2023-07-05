class Solution {
public:
    // sort the array
    // linear search
    // modified binary search
    int findMin(vector<int>& v) {
        int n=v.size();
        int low=0,high=n-1,mid=0;
        while(low<high)
        {
            mid=low+(high-mid)/2;
            if(v[mid]>v[high])
            low=mid+1;
            else
            high=mid;
        }
        return v[low];
    }
};