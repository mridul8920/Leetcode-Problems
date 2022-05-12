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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        queue<pair<TreeNode*,long long int>>q;
        q.push({root,0});
        long long int ans=0;
        while(!q.empty()){
            long long int size=q.size();
           long long  int mini=q.front().second;
            long long int first,last;
            for(int i=0;i<size;i++){
                long long int cur_index=q.front().second-mini;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0) first=cur_index;
                if(i==size-1) last=cur_index;
                
                if(node->left)
                    q.push({node->left,cur_index*2+1});
                if(node->right)
                    q.push({node->right,cur_index*2+2});
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};