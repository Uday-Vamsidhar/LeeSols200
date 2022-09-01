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
    int ans=0;
    void sol(TreeNode* root, int m)
    {
        if(!root) return;
        if(root->val>=m)
        {
            ans++;
            m=root->val;
        }
        sol(root->right,m);
        sol(root->left,m);
    }
    int goodNodes(TreeNode* root) 
    {
        sol(root,-99999);
        return ans;
    }
};