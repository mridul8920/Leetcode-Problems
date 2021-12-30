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
        
        vector<vector<int>>v;
        if(root==NULL) return v;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            
            for(int i=0;i<size;i++){
            TreeNode *cur=q.front();
            q.pop();
            if(cur->left) q.push(cur->left);
            if(cur->right) q.push(cur->right);
            level.push_back(cur->val);    
            }
            
            v.push_back(level);
        }
        return v;
    }
};