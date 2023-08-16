class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        vector<int> ans;
        multiset<int> q;
        int n=v.size();
        for(int i=0;i<k;i++)
        {
            q.insert(v[i]);
        }
        ans.push_back(*q.rbegin());
        for(int i=k;i<n;i++)
        {
            q.erase(q.find(v[i-k]));
            q.insert(v[i]);
            ans.push_back(*q.rbegin());
        }
        return ans;
    }
};