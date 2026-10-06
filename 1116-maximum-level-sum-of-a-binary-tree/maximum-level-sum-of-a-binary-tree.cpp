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
    int maxLevelSum(TreeNode* root) {
        int maxsum=INT_MIN;
        queue<TreeNode *>q;
        int lvl=1;
        int ans;
        q.push(root);

        while(q.size() > 0){
            int n=q.size();
            int sum=0;

            for(int i=0 ; i<n ; i++){
                TreeNode *cur=q.front();
                q.pop();

                 sum+=cur->val;


                if(cur->left != NULL)
                q.push(cur->left);
                
                if(cur->right != NULL)
                q.push(cur->right);

            }
            if(sum > maxsum){
                maxsum=sum;
                ans=lvl;
                }

            lvl++;
        }

        return ans;
        
    }
};