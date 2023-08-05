class Solution {
public:
    bool divideArray(vector<int>& v) {
        unordered_map<int,int> mp;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]]%2)
            return false;
        }
        return true;
    }
};