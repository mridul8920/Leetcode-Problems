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
    vector<int> inorderTraversal(TreeNode* root) {
        //Iterative  Aprpoach
        //TC-O(N)    SC->O(N)
        if(root==NULL)
            return {};
        vector<int>ans;
        stack<TreeNode*>s;
        TreeNode* cur=root;
        while(!s.empty() or cur!=NULL){
            while(cur!=NULL){
                s.push(cur);
                cur=cur->left;
            }
            cur=s.top();
            ans.push_back(cur->val);
            s.pop();
            cur=cur->right;
        }
        return ans;
    }
};