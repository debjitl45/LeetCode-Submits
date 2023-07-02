class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<int> h(26,0);
        char ans=' ';
        for(char ch:letters)
        {
            h[ch-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(h[i] && i>target-'a')
            {
            ans=(char)(i+'a');
            break;
            }
        }
        return ans==' '? letters[0]:ans;
    }
};