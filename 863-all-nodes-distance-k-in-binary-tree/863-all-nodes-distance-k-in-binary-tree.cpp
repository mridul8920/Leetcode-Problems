/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void MakeParents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if(cur->left){
                parent[cur->left]=cur;
                q.push(cur->left);
            }
            if(cur->right){
                parent[cur->right]=cur;
                q.push(cur->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        MakeParents(root,parent);
        
        int dis=0;
        queue<TreeNode*>q;
        q.push(target);
        unordered_map<TreeNode*,bool>visited;
        visited[target]=true;
        while(!q.empty()){
            int size=q.size();
            if(dis==k) break;
            dis++;
            for(int i=0;i<size;i++){
                TreeNode* cur=q.front();
                q.pop();
                if(cur->left and !visited[cur->left]){
                    q.push(cur->left);
                    visited[cur->left]=true;
                }
                 if(cur->right and !visited[cur->right]){
                    q.push(cur->right);
                    visited[cur->right]=true;
                }
                 if(parent[cur] and !visited[parent[cur]]){
                    q.push(parent[cur]);
                    visited[parent[cur]]=true;
                }
            }
        }
        vector<int>res;
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            res.push_back(cur->val);
        }
        return res;
    }
};