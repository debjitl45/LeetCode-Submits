class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        if(!binary_search(v.begin(),v.end(),t))
        return {-1,-1};
        else
        {
            int lb=lower_bound(v.begin(),v.end(),t)-v.begin();
            int ub=upper_bound(v.begin(),v.end(),t)-v.begin()-1;
            return {lb,ub};
        }
    }
};