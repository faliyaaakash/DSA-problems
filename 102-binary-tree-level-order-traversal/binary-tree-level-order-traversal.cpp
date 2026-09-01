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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> qu;
        vector<vector<int>> res;
        if(root==NULL){return res;}
        qu.push(root);
        while(!qu.empty()){
            queue<TreeNode*> temp;
            vector<int> v={};
            while(!qu.empty()){
                v.push_back(qu.front()->val);
                TreeNode* cur=qu.front();
                qu.pop();
                if(cur->left!=NULL)
                 temp.push(cur->left);
                
                if(cur->right!=NULL)
                 temp.push(cur->right);
            }
           qu=temp;
           res.push_back(v);
        }
        return res;
    }
};