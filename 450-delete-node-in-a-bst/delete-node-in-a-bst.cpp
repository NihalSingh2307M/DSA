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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr) return nullptr;

        if(key< root->val){
            root->left = deleteNode(root->left,key);
        }else if(key>root->val){
            root->right = deleteNode(root->right,key);
        }else{
            //case1 no left 
            if(root->left == nullptr){
                return root->right;
            }

            //case2 no right
            if(root->right == nullptr){
                return root->left;
            }
            //case 3 both side 
            TreeNode* succ = root->right;
            while(succ->left != nullptr){
                succ = succ->left;
            }
            root->val = succ->val;
            root->right = deleteNode(root->right,succ->val);
        }
        return root;
    }
};