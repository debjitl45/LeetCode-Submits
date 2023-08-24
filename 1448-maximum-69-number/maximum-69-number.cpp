class Solution {
public:
    int maximum69Number (int n) {
        string s=to_string(n);
        string t;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6' && cnt<1)
            {
                t.push_back('9');
                cnt++;
            }
            else
            t.push_back(s[i]);
        }
        return stoi(t);
    }
};