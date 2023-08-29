class Solution {
public:
    int bestClosingTime(string s) {
        int n=s.size();
        int mx=0;
        int idx=0;
        pair<int,int> cnt={0,0};
        for(int i=0;i<n;i++)
        {
            if(s[i]=='Y')
            {
                cnt.first++;
                cnt.second=i+1;
            }
            else
            {
                cnt.first--;
                cnt.second=i;
            }
            if(cnt.first>mx)
            {
                idx=cnt.second;
            }
            mx=max(mx,cnt.first);
        }
        return idx;
    }
};