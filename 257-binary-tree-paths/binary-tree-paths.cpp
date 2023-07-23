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
    vector<string> ans;
    void preorder(TreeNode* root,string s)
    {
        if(!root) return ;

        s+=to_string(root->val)+"->";
        
        preorder(root->left,s);
        preorder(root->right,s);

        if(!root->left && !root->right)
        ans.push_back(s.substr(0,s.size()-2));
        return ;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        preorder(root,"");
        return ans;
    }
};