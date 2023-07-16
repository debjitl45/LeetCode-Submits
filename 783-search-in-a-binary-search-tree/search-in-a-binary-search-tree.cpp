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
    TreeNode* search(TreeNode* root, int t)
    {
        if(!root || root->val==t) return root;

        if(root->val<t)
        return search(root->right,t);
        else
        return search(root->left,t);
    }
    TreeNode* searchBST(TreeNode* root, int t) {
        return search(root,t);       
    }
};