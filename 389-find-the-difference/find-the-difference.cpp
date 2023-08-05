class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=' ';
        for(char ch:t)
        ans^=ch;
        for(char ch:s)
        ans^=ch;
        return ans+' ';
    }
};