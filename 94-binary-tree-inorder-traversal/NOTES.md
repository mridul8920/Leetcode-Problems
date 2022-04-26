```
class Solution {
public:
vector<int> inorderTraversal(TreeNode* root) {
stack<TreeNode*>s;
TreeNode* cur=root;
vector<int>v;
if(!root) return v;
while(cur!=NULL || s.empty()==false){
if(cur!=NULL){                   //visiting extreme left
s.push(cur);
cur=cur->left;
}
else{
cur=s.top();
s.pop();
v.push_back(cur->val);         //left node visted now root is printed
cur=cur->right;                //left node and root visited now visiting the right node
}
}
return v;
}
};
```