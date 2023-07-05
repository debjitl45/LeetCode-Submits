class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int zeros=0,ans=0,idx=0;

        for(int i=0;i<v.size();i++)
        {
            if(!v[i]) zeros++;

            while(zeros>1)
            {
                if(!v[idx])
                zeros--;

                idx++;
            }
            ans=max(ans,i-idx);
        }
        return ans;
    }
};