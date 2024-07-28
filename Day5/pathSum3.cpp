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
    int solver(long long int &sum ,int targetSum,TreeNode* node, unordered_map<long long int,int>&st)
    {
        if(!node)return 0;
        sum = sum + node->val;
        int ans = (sum == targetSum)?1:0;
        ans =ans+st[sum-targetSum];
        st[sum] ++;
        int left = solver(sum,targetSum,node->left,st);
        int right =solver(sum,targetSum,node->right,st);
        st[sum]--;
        sum =sum-node->val;
        return ans+left+right;
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        long long int sum =0;
        unordered_map<long long int,int>st;
        return solver(sum,targetSum,root,st);
    }
};