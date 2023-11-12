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
    vector<int> res;
    int curr=0,freq=0,maxFreq=0; 
    vector<int> findMode(TreeNode* root) {
        if(!root) return res;

        findMode(root->left);

        if(curr!=root->val)
        {
            freq=1;
            curr=root->val;
        }
        else if(curr==root->val)
        {
            freq++;
        }
        if(freq>maxFreq) {
            maxFreq=freq;
            res={curr};
        }
        else if(freq==maxFreq) res.push_back(curr);
        findMode(root->right);
        return res;
    }
};