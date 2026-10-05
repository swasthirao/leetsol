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
int height(TreeNode* root){
    if(root == NULL)
    return 0;

    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        
        
        if(root == NULL)
        return 0;
        int lefth=height(root->left);
        int righth=height(root->right);

        int thruroot=lefth+righth;

        int leftdia=diameterOfBinaryTree(root->left);
        int rightdia=diameterOfBinaryTree(root->right);

        return max(thruroot,max(leftdia,rightdia));

    }
};