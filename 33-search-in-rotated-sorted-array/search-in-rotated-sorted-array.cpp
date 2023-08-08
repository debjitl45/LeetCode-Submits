class Solution {
public:
    int findPivot(vector<int>& v)
    {
        int low=0,high=v.size()-1,mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid<v.size()-1 && v[mid]>v[mid+1])
            return mid;
            else if(v[low]<=v[mid])
            low=mid+1;
            else
            high=mid-1;
        }
        return 0;
    }
    int bs(vector<int>& v,int low,int high,int t)
    {
        int mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(v[mid]==t)
            return mid;
            else if(v[mid]>t)
            high=mid-1;
            else
            low=mid+1;
        }
        return -1;
    }
    int search(vector<int>& v, int t) {
        int n=v.size()-1;
        int pivot=0;
        if(n>1)
        pivot=findPivot(v);
        int left=bs(v,0,pivot,t);
        int right=bs(v,pivot+1,n,t);
        return (left==-1) ? right:left;
    }
};