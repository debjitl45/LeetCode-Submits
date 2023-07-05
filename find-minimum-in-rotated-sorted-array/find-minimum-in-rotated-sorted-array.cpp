class Solution {
public:
    int findPivot(vector<int>& v) {
        int low=0,high=v.size()-1,mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid<v.size()-1 && v[mid]>v[mid+1])
            return mid+1;
            else if(v[low]<=v[mid])
            low=mid+1;
            else
            high=mid-1;
        }
        return 0;
    }
    int findMin(vector<int>& v) {
        int pivot=findPivot(v);
        return v[pivot];
    }
};