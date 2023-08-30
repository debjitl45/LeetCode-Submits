class Solution {
public:
    string largestOddNumber(string s) {
        int n=s.size(),max_pos=0,flag=true;
        for(int i=0;i<n;i++)
        {
            int x=s[i]-'0';
            if(x%2)
            {
                max_pos=max(max_pos,i);
                flag=false;
            }
        }
        string ans="";
        if(flag) return ans;
        for(int i=0;i<=max_pos;i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
};