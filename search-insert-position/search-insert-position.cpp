class Solution {
public:
    int searchInsert(vector<int>& v, int t) {
        vector<int>::iterator it;
        it=lower_bound(v.begin(),v.end(),t);
        return it-v.begin();
    }
};