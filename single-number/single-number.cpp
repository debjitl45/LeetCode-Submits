class Solution {
public:
    int singleNumber(vector<int>& v) {
        int x=v[0];
        for(int i=1;i<v.size();i++)
        {
            x=x^v[i];
        }
        return x;
    }
};