```
class Solution {
public:
vector<int> preorderTraversal(TreeNode* root) {
//TC->O(N)        SC->O(N)
vector<int>v;
if(root==NULL)
return v;
stack<TreeNode*>st;
st.push(root);
while(!st.empty()){
TreeNode *cur=st.top();
st.pop();
v.push_back(cur->val);
if(cur->right) st.push(cur->right);
if(cur->left)   st.push(cur->left);
//KAHANI MAI TWIST AS WE ARE USING A STACK SO INSTEAD OF PUSHING THE LEFT SUB TREE                 WE ARE PUSHING THE RIGHT SUBTREE AS STACK FOLLOWS 'LIFO'.
}
return v;
}
};
```