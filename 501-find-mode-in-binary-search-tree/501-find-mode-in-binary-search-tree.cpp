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
    vector<int> findMode(TreeNode* root) {
        map<int,int>m;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode* cur=s.top();
            s.pop();
            m[cur->val]++;
            if(cur->right)
                s.push(cur->right);
            if(cur->left)
                s.push(cur->left);
        }
        vector<int>v;
        int currentMax=0;
        
        for(auto it : m){
            if (it.second > currentMax) {
                currentMax = it.second;
             }
        }
        for(auto it:m){
            if(it.second==currentMax)
                v.push_back(it.first);
        
        }
       
        return v;
    }
};