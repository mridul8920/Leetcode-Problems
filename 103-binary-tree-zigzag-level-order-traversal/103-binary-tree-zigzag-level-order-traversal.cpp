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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            while(size--){
            TreeNode* cur=q.front();
            q.pop();
            v.push_back(cur->val);
            if(cur->left)  q.push(cur->left);
            if(cur->right)  q.push(cur->right);
            }
            if(flag==false)
                reverse(v.begin(),v.end());
            res.push_back(v);
            flag=!flag;
        }
        return res;
    }
};