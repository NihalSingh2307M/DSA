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

    int dfs(TreeNode* root,int minval,int maxval){
        if(!root) return 0;

        int ans = max(abs(root->val - minval),abs(root->val - maxval));

        minval  = min(minval,root->val);
        maxval  = max(maxval,root->val);

        ans = max(ans,dfs(root->left,minval,maxval));
        ans = max(ans,dfs(root->right,minval,maxval));

        return ans;
    }

    int maxAncestorDiff(TreeNode* root) {
        return dfs(root,root->val,root->val);
    }
};