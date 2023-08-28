class Solution {
public:
    int minTimeToType(string word) {
        int ascii=97,time=0;
        for(int i=0;i<word.size();i++)
        {
            if(abs(word[i]-ascii)<=13)
            time+=abs(word[i]-ascii)+1;
            else
            time+=26-abs(word[i]-ascii)+1;
            ascii=word[i];
        }
        return time;
    }
};