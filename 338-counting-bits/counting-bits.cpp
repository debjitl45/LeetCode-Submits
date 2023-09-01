class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(counter(i));
        }
        return ans;
    }
    int counter(int n)
    {
        if(n==0) return 0;
        if(n==1) return 1;

        if(n%2==0) return counter(n/2);
        else return 1+counter(n/2);
    }
};