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
    int treeHeight(TreeNode* root)
    {
        if(!root) return 0;
        return 1+max(treeHeight(root->left),treeHeight(root->right));
    }
    void checkDeepNodes(TreeNode* root,int depth,vector<int>& deepNodes,int height)
    {
        if(root==NULL) return ;
        depth+=1;

        if(depth==height)
        deepNodes.push_back(root->val);

        checkDeepNodes(root->left,depth,deepNodes,height);
        checkDeepNodes(root->right,depth,deepNodes,height);
    }
    int deepestLeavesSum(TreeNode* root) {
        vector<int> deepNodes;
        int depth=0;
        int height=treeHeight(root);
        checkDeepNodes(root,depth,deepNodes,height);
        return accumulate(deepNodes.begin(),deepNodes.end(),0);
    }
};