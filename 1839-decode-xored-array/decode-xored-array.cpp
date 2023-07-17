class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size(),ans=0;
        vector<int> v;
        v.push_back(first);
        for(int i=0;i<n;i++)
        {
            ans=encoded[i]^v[i];
            v.push_back(ans);
        }
        return v;
    }
};