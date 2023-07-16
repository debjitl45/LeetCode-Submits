/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root,vector<int>& v)
    {
        if(!root) return;

        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> v;
        preorder(root,v);
        sort(v.begin(),v.end());
        int n=v.size();
        int mini=v[0];

        if(v[0]==v[n-1])
        return -1;
        
        for(int i=0;i<n;i++)
        {
            if(mini<v[i])
            {
            mini=v[i];
            break;
            }
        }
        return mini;
    }
};