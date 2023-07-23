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
    bool helper(TreeNode* root)
    {
        bool left=root->left==NULL || root->val==root->left->val && helper(root->left);
        bool right=root->right==NULL || root->val==root->right->val && helper(root->right);
        return left && right;
    }
    bool isUnivalTree(TreeNode* root) {
        return helper(root);
    }
};