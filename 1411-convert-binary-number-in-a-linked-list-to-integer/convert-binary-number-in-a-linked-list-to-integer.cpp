/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        ListNode* p=head;
        while(p)
        {
            v.push_back(p->val);
            p=p->next;
        }
        reverse(v.begin(),v.end());
        int n=v.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i]*pow(2,i);
        }
        return sum;
    }
};