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
    vector<TreeNode*> helper(int start,int end,map<pair<int,int>,vector<TreeNode*>>& mp)
    {
        vector<TreeNode*> ans;
        if(start>end)
        {
            ans.push_back(NULL);
            return ans;
        }
        if(mp.find(make_pair(start,end))!=mp.end())
        return mp[make_pair(start,end)];

        for(int i=start;i<=end;i++)
        {
            vector<TreeNode*> leftST=helper(start,i-1,mp);
            vector<TreeNode*> rightST=helper(i+1,end,mp);

            for(auto left: leftST)
            {
                for(auto right: rightST)
                {
                    TreeNode* root=new TreeNode(i,left,right);
                    ans.push_back(root);
                }
            }
        }
        return mp[make_pair(start,end)]=ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        map<pair<int,int>,vector<TreeNode*>> mp;
        return helper(1,n,mp); 
    }
};