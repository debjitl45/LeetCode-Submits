class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int t) {
        int cnt=0,sum=0;
        unordered_map<int,int> mp;

        for(int x:v)
        {
            sum+=x;
            if(sum==t)
            cnt++;

            if(mp.count(sum-t))
            cnt+=mp[sum-t];

            mp[sum]++;
        }
        return cnt;
    }
};