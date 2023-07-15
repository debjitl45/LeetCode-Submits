class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& v, int k, int t) 
    {
        int n=v.size();
        if(n==0 || k<0 || t<0)
        return false;

        unordered_map<int,int> buckets;

        for(int i=0;i<n;i++)
        {
            int bucket=v[i]/((long)t+1);
            if(v[i]<0) --bucket;

            if(buckets.find(bucket)!=buckets.end())
            return true;
            else
            {
                buckets[bucket]=v[i];
                if(buckets.find(bucket-1)!=buckets.end() && 
                (long)v[i]-buckets[bucket-1]<=t) 
                return true;
                if(buckets.find(bucket+1)!=buckets.end() && 
                (long)buckets[bucket+1]-v[i]<=t)
                return true;

                if(buckets.size()>k)
                {
                    int z=v[i-k]/((long)t+1);
                    if(v[i-k]<0) --z;
                    buckets.erase(z);
                }
            }
        }
        return false;
    }
};