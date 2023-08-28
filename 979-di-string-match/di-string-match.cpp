class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> v;
        int l=0,r=s.size();
        int n=s.size();
        for(auto x:s)
        {
            if(x=='I')
            v.push_back(l++);
            else
            v.push_back(r--);
        }
        v.push_back(l);
        return v;
    }
};