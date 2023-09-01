class Solution {
public:
    int counter(int n)
    {
        if(n<=1) return n;

        if(n%2==0) return counter(n/2);
        else  return 1+counter(n/2);
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(counter(i));
        }
        return ans;
    }
};