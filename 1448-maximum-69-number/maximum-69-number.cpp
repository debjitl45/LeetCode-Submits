class Solution {
public:
    int maximum69Number (int n) {
        string s=to_string(n);
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6' && cnt<1)
            {
                s[i]='9';
                cnt++;
            }
        }
        return stoi(s);
    }
};