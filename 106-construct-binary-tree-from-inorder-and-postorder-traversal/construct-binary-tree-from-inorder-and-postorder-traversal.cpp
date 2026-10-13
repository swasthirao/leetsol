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

    int search(vector<int>& inorder, int left, int right, int val) {
        for(int i = left; i <= right; i++) {
            if(inorder[i] == val) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* buildTree2(vector<int>& inorder, vector<int>& postorder,
                         int& postInd, int left, int right) {

        if(left > right)
            return NULL;

        // last element of postorder is root
        TreeNode* root = new TreeNode(postorder[postInd]);

        int inIdx = search(inorder, left, right, postorder[postInd]);

        postInd--;

        // RIGHT first because we're moving backwards in postorder
        root->right = buildTree2(inorder, postorder, postInd,
                                 inIdx + 1, right);

        root->left = buildTree2(inorder, postorder, postInd,
                                left, inIdx - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        int postInd = postorder.size() - 1;

        return buildTree2(inorder, postorder, postInd,
                          0, inorder.size() - 1);
    }
};

