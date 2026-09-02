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
    int height(TreeNode* node){
        if(!node) return 0;

        int leftheight = height(node->left);
        if(leftheight ==-1) return -1;

        int rightheight = height(node->right);
        if(rightheight == -1) return -1;

        if(abs(leftheight-rightheight)>1) return -1;

        return 1+max(height(node->left),height(node->right));
    }; 
    bool isBalanced(TreeNode* root) {
        return height(root)!= -1 ;
    }
};