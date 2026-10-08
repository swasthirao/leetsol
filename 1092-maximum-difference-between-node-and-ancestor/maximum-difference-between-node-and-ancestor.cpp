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
    int solve(TreeNode* root, int mn, int mx) {

        if (root == NULL)
            return 0;

        // Include current node in min and max
        mn = min(mn, root->val);
        mx = max(mx, root->val);

        // Find answer in left and right subtree
        int left = solve(root->left, mn, mx);
        int right = solve(root->right, mn, mx);

        // Best answer can be:
        // 1. Current path -> mx - mn
        // 2. Somewhere in left subtree
        // 3. Somewhere in right subtree
        return max(mx - mn, max(left, right));
    }

    int maxAncestorDiff(TreeNode* root) {
        return solve(root, root->val, root->val);
    }
};