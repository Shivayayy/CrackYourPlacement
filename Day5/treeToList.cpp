class Solution {
public:
    TreeNode* solver(TreeNode* node)
    {
        if (!node) return nullptr;
        TreeNode* leftFlattened = solver(node->left);
        TreeNode* rightFlattened = solver(node->right);

        TreeNode* right = rightFlattened;

        node->right = leftFlattened;
        node->left = nullptr;

        TreeNode* end = node;
        while (end->right)end = end->right;
        end->right = right;

        return node;
    }

    void flatten(TreeNode* root) 
    {
        if (root) solver(root);
    }
};