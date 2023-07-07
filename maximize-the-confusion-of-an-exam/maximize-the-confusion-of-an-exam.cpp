class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int count=0;
        int left=0;
        int ans=INT_MIN;
        for(int i=0;i<answerKey.size();i++)
        {
            if(answerKey[i]=='F')
            {
                count++;
            }
            while(count>k)
            {
                if(answerKey[left]=='F')
                {
                    count--;
                }
                left++;
            }
            ans=max(ans,i-left+1);
        }

        count=0;
        left=0;
        for(int i=0;i<answerKey.size();i++)
        {
            if(answerKey[i]=='T')
            {
                count++;
            }
            while(count>k)
            {
                if(answerKey[left]=='T')
                {
                    count--;
                }
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};