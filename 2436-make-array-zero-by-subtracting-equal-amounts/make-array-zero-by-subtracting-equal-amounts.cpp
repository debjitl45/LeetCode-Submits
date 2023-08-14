class Solution {
public:
    int minimumOperations(vector<int>& v) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            pq.push(v[i]);
        }
        int ans=0,num=0;
        while(pq.size()>0)
        {
            if(pq.top()==0 || pq.top()-num==0)
            {
                pq.pop();
            }
            else
            {
                int temp=pq.top()-num;
                num+=temp;
                pq.pop();
                ans++;
            }
        }
        return ans;
    }
};