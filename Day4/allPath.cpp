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
    void solver(TreeNode* node, vector<string>& ans, string temp) {
        if (!node) return;

        // Append current node value to the path
        temp += to_string(node->val);

        // If it's a leaf node, add the path to results
        if (!node->left && !node->right) {
            ans.push_back(temp);
            return;
        }

        // Otherwise, continue the path with "->"
        temp += "->";

        // Recursively process left and right children
        if (node->left) {
            solver(node->left, ans, temp);
        }
        if (node->right) {
            solver(node->right, ans, temp);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string>ans;
        string temp;
        solver(root,ans,temp);
        return ans;
    }
};