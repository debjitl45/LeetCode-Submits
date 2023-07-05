class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int ans=0,zc=0,start=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0) zc+=1;

            while(zc>1)
            {
                if(v[start]==0)
                zc-=1;
                start++;
            }
            ans=max(ans,i-start);
        }
        return ans;
    }
};