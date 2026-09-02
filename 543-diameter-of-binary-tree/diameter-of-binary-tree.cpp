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
        int rightheight = height(node->right);

        return 1+max(leftheight,rightheight);
    }
    int diameter(TreeNode* node){
        if(!node) return 0;
        int left = height(node->left);
        int right = height(node->right);

        return max({
            left+right,diameter(node->left),diameter(node->right)
        });
    }
    int diameterOfBinaryTree(TreeNode* root) {  
        return diameter(root);      
    }
};