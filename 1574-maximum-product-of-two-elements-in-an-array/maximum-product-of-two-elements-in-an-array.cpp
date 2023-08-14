class Solution {
public:
    int maxProduct(vector<int>& v) {
        int maxVal=INT_MIN,n=v.size();
        priority_queue<int,vector<int>> pq;
        for(int i=0;i<n;i++)
        {
            int x=v[i];
            pq.push(x);
        }
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        return (x-1)*(y-1);
    }
};