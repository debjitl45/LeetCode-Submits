class Solution {
public:
    int missingNumber(vector<int>& v) {
        int ans=0;
        for(int x:v)
        {
            ans=ans^x;
        }
        for(int i=0;i<=v.size();i++)
        {
            ans=ans^i;
        }
        return ans;
    }
};