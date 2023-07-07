class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int curr=0,ans=0,idx=0,cnt=0,n=v.size();
        for(int i=0;i<n;i++)
        {
            if(!v[i]) cnt++;

            if(cnt>1)
            {
                if(!v[idx]) cnt--;
                idx++;
            }
            curr=i-idx;
            ans=max(ans,i-idx);
        }
        return ans;
    }
};