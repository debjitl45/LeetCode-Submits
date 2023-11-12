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
    unordered_map<int,int> mp;
    void preorder(TreeNode* root){
        if(!root) return;
        preorder(root->left);
        mp[root->val]++;
        preorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        preorder(root);
        int mx=0;
        for(auto it:mp){
            if(it.second>mx)
            mx=it.second;
        }
        vector<int> ans;
        for(auto it:mp){
            if(it.second==mx)
            ans.push_back(it.first);
        }
        return ans;
    }
};