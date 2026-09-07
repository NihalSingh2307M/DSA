class Solution { 
public: 
    int maxDepth = 0; 
    TreeNode* ans = nullptr; 
    TreeNode* treeRoot = nullptr;
 
    void dfs(TreeNode* root, int depth) { 
        if (root == nullptr) 
            return; 
 
        if (depth > maxDepth) { 
            maxDepth = depth; 
            ans = root; 
        } 
        else if (depth == maxDepth) { 
            ans = lca(treeRoot, ans,root); 
        } 
 
        dfs(root->left, depth + 1); 
        dfs(root->right, depth + 1); 
    } 
 
    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q) { 
        if (root == nullptr || root == p || root == q) 
            return root; 
 
        TreeNode* left = lca(root->left, p, q); 
        TreeNode* right = lca(root->right, p, q); 
 
        if (left == nullptr) 
            return right; 
 
        if (right == nullptr) 
            return left; 
 
        return root; 
    } 
 
    TreeNode* lcaDeepestLeaves(TreeNode* root) { 
        treeRoot = root;
        dfs(root, 0); 
        return ans; 
    } 
};