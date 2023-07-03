class Solution {
public:
    bool buddyStrings(string s, string t) {
        if(s.size()!=t.size())
        return false;

        if(s==t)
        {
            vector<int> freq(26,0);
            for(auto& ch:s)
            {
                freq[ch-'a']++;
                if(freq[ch-'a']==2)
                return true;
            }
            return false;
        }
        int idx1=-1,idx2=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                if(idx1==-1)
                idx1=i;
                else if(idx2==-1)
                idx2=i;
                else
                return false;
            }
        }
        if(idx2==-1)
        return false;
        
        return s[idx1]==t[idx2] && s[idx2]==t[idx1];
    }
};