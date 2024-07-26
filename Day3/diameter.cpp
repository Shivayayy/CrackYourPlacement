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
    int height(TreeNode* node,int &ans)
    {
        if(!node)return 0;
        int left =1+height(node->left,ans);
        int right =1+height(node->right,ans);
        ans =max(ans,(left+right-1));
        return max(right,left);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int ans =INT_MIN;
        height(root,ans);
        return ans-1;
    }
};