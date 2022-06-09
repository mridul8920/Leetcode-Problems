/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
     TreeNode* BST(int start,int end,vector<int>&nums){
        int i=start;
        int j=end;
        if(i>j)
            return NULL;
        int mid=(i+j)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=BST(i,mid-1,nums);
        root->right=BST(mid+1,j,nums);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head)
            return NULL;
        vector<int>nums;
        while(head!=NULL){
            nums.push_back(head->val);
            head=head->next;
        }
        return BST(0,nums.size()-1,nums);
    }
};