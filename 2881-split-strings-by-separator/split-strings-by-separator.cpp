class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& w, char sep) {
        vector<string> ans;
        for(int i=0;i<w.size();i++)
        {
            string s=w[i];
            string temp="";
            for(auto a:s)
            {
                if(a==sep && temp!="")
                {
                    ans.push_back(temp);
                    temp="";
                }
                if(a!=sep)
                temp+=a;
            }
            if(temp!="")
            ans.push_back(temp);
        }
        return ans;
    }
};