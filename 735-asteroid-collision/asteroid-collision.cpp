class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {
        vector<int> st;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            int flag=0;
            if(st.size()==0)
            {
                st.push_back(v[i]);
                continue;
            }

            while(st.size() && v[i]<0 && st.back()>0)
            {
                if(st.back()<abs(v[i]))
                st.pop_back();
                else
                {
                    flag=1;
                    if(st.back()==abs(v[i]))
                    st.pop_back();
                    break;
                }
            }
            if(flag)
            continue;
            st.push_back(v[i]);            
        }
        return st;
    }
};