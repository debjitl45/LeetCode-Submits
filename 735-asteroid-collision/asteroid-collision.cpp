class Solution {
public:
    vector<int> asteroidCollision(vector<int>& astrds) {
        stack<int> st;
        int n=astrds.size();
        for(int x:astrds)
        {
            int flag=1;
            while(!st.empty() && (st.top()>0 && x<0))
            {
                if(abs(st.top())<abs(x))
                {
                    st.pop();
                    continue;
                }
                else if(abs(st.top())==abs(x))
                {
                    st.pop();
                }
                flag=0;
                break;
            }
            if(flag)
            st.push(x);
        }
        vector<int> left(st.size());
        for(int i=left.size()-1;i>=0;i--)
        {
            left[i]=st.top();
            st.pop();
        }
        return left;
    }
};