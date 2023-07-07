class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int ans=0,cnt=0,i=0,j=0,n=v.size();
        while(j<n)
        {
            if(v[j]==0)
            {
                cnt++;
            }
            if(cnt>1)
            {
                if(v[i]==0)
                cnt--;
                i++;
            }
            int windowSize=j-i;
            j++;
            ans=max(ans,windowSize);
            windowSize=0;
        }
        return ans;
    }
};