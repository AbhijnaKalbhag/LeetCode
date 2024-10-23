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
    TreeNode* replaceValueInTree(TreeNode* root) {
        vector<int>levelSum;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int curSum=0;
            int levelSize=q.size();
            while(levelSize--){
                TreeNode* node=q.front();
                q.pop();
                curSum+=node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            levelSum.push_back(curSum);
        }

        queue<pair<TreeNode*,int>>q2;
        q2.push({root,root->val});
        int level=0;
        while(!q2.empty()){
            int levelSize=q2.size();
            while(levelSize--){
                pair<TreeNode*,int>frontPair=q2.front();
                TreeNode* node=frontPair.first;
                int val=frontPair.second;
                q2.pop();
                node->val=levelSum[level]-val;

                int childSum=0;
                if(node->left){
                    childSum+=node->left->val;
                }
                if(node->right){
                    childSum+=node->right->val;
                }

                if(node->left){
                    q2.push({node->left,childSum});
                }
                if(node->right){
                    q2.push({node->right,childSum});
                }
            }
            level++;
        }
        return root;
    }
};