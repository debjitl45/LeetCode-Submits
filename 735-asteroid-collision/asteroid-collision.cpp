class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {
        int n=v.size();
        int j=0;
        
        for(int i=0;i<n;i++)
        {
            int x=v[i];
            while(j>0 && v[j-1]>0 && x<0 && v[j-1]<abs(x))
            {
                j--;
            }
            if(j==0 || x>0 || v[j-1]<0)
            v[j++]=x;
            else if(v[j-1]==abs(x))
            j--;
        }
        vector<int> ans(v.begin(),v.begin()+j);
        return ans;
    }
};