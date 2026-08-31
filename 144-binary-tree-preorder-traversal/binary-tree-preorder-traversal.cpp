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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<pair<TreeNode*,int>> st;
        vector<int> pre={};
        if(root==NULL){return pre;}
        st.push({root,1});
        while(!st.empty()){
            pair<TreeNode*,int> curr=st.top();
           if(curr.second==1){
             pre.push_back(curr.first->val);
             st.pop();
             st.push({curr.first,curr.second+1});
             if(curr.first->left!=NULL){
                 st.push({curr.first->left,1});
             }
           }else if(curr.second==2){
             st.pop();
             st.push({curr.first,curr.second+1});
             if(curr.first->right!=NULL){
                 st.push({curr.first->right,1});
             }
           }else {
             st.pop();
           }
        }
        return pre;
    }
};