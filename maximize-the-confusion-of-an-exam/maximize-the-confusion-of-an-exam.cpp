class Solution {
public:
    int helper(string v,char ch,int k)
    {
        int cnt=0,left=0,ans=INT_MIN,n=v.size();
        for(int i=0;i<n;i++)
        {
            if(v[i]==ch) cnt++;

            while(cnt>k)
            {
                if(v[left]==ch)
                cnt--;
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
    int maxConsecutiveAnswers(string s, int k) {
        return max(helper(s,'F',k),helper(s,'T',k));
    }
};