// Last updated: 11/27/2026, 12:17:00 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
     if (!root) return false;

    if (!root->left && !root->right) {
        return targetSum==root->val;
    }

    int newSum=targetSum-root->val;
    return hasPathSum(root->left, newSum) || hasPathSum(root->right, newSum);
}