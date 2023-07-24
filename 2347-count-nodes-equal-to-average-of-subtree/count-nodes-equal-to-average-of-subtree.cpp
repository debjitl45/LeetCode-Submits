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
    int subTree(TreeNode* root,int &v)
    {
        if(!root) return 0;
        v++;
        return root->val+subTree(root->right,v)+subTree(root->left,v);
    }
    int cnt=0;
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL)
        return 0;
        int v=0;
        int x=subTree(root,v);
        if(root->val==(x/v)) cnt++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return cnt;
    }
};