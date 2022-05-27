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
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return 0;  
        vector<int>v;
    TreeNode* cur=root;
        stack<TreeNode*>s;
        while(cur!=NULL or !s.empty()){
            while(cur!=NULL){
                s.push(cur);
                cur=cur->left;
            }
            cur=s.top();
            s.pop();
            k=k-1;
            if(k==0)
                return cur->val;
            cur=cur->right;
        }
        return 0;
    }
};