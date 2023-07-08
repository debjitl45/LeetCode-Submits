class Solution {
public:
    bool isNice(string str)
    {
        int n=str.size();
        map<int,bool> mp;
        for(int i=0;i<n;i++)
        {
            int p=str[i];
            mp[p]=true;
        }
        for(int i=0;i<str.size();i++)
        {
            int q=str[i];
            if(isupper(str[i]))
            {
                int z=q+32;
                if(!mp[z])
                return false;
            }
            else
            {
                int z=q-32;
                if(!mp[z])
                return false;
            }
        }
        return true;
    }
    string longestNiceSubstring(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                string str=s.substr(i,j);
                if(isNice(str))
                {
                    if(str.size()>ans.size()) ans=str;
                }
            }
        }
        return ans;
    }
};