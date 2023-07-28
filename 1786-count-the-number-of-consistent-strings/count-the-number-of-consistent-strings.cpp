class Solution {
public:
    bool helper(string s,string t)
    {
        vector<int> h1(26,0);
        vector<int> h2(26,0);
        for(int i=0;i<s.size();i++)
        {
            h1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            h2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
           if(h1[i]==0 && h2[i]>0)
           return false;
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
        for(auto word:words)
        {
            if(helper(allowed,word))
            c++;
        }
        return c;
    }
};