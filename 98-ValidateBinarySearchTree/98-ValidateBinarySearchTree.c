// Last updated: 11/27/2026, 12:17:03 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool helper(struct TreeNode* root, long long minVal, long long maxVal) {
    if (!root) return true;
    if (root->val<=minVal || root->val>=maxVal) 
        return false;
    return helper(root->left, minVal, root->val) &&
           helper(root->right, root->val, maxVal);
}

bool isValidBST(struct TreeNode* root) {
    return helper(root, LLONG_MIN, LLONG_MAX);
}