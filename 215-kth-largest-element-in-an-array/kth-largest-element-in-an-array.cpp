class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        if(v.size()==1)
        return v[0];

        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(int i=0;i<k;i++)
        {
            minHeap.push(v[i]);
        }
        for(int i=k;i<v.size();i++)
        {
            int x=v[i];
            if(x>minHeap.top())
            {
                minHeap.pop();
                minHeap.push(x);
            }
        }
        int ans=minHeap.top();
        return ans;
    }
};