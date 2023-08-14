class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        int n=v.size();
        if(n==1)
        return v[0];

        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<k;i++)
        {
            int x=v[i];
            pq.push(x);
        }
        for(int i=k;i<n;i++)
        {
            int x=v[i];
            if(x>pq.top())
            {
                pq.pop();
                pq.push(x);
            }
        }
        return pq.top();
    }
};