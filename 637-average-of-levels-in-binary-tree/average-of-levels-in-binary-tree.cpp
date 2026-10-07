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
    vector<double> averageOfLevels(TreeNode* root) {

        vector<double>ans;

        if(root == NULL)
        return ans;

        queue<TreeNode*>q;

        q.push(root);

            while(q.size() > 0){

                int n=q.size();
                
                double val=0;
                double sum=0;
                int nodes=0;

                for(int i=0 ; i<n ; i++){

                    TreeNode* cur=q.front();

                    nodes++;

                    q.pop();
                    sum+=cur->val;
                    
                    if(cur->left != NULL)
                    q.push(cur->left);

                     if(cur->right != NULL)
                    q.push(cur->right);
            
                }

                val=sum/n;
                ans.push_back(val);

                

            }
            return ans;
        
    }
};