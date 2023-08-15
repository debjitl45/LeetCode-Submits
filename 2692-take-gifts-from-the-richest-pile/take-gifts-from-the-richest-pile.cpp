class Solution {
public:
    long long pickGifts(vector<int>& v, int k) {
        priority_queue<int> pq;
        for(int x:v)
        {
            pq.push(x);
        }
        long long ans=0;
        int x;
        while(k--)
        {
            x=pq.top();
            pq.pop();
            pq.push(sqrt(x));
        }
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};