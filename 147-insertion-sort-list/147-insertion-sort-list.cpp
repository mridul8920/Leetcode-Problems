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
class Solution {
public:
     ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* dummy=new ListNode(-1);
        ListNode* cur=dummy;
        while(l1 and l2){
            if(l1->val<l2->val){
                cur->next=l1;
                l1=l1->next;
            }
            else{
                cur->next=l2;
                l2=l2->next;
            }
            cur=cur->next;
        }
        if(l1) 
            cur->next=l1;
        if(l2)
            cur->next=l2;
        return dummy->next;
    }
     
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode *fast=head->next,*slow=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        slow->next=NULL;
        head=insertionSortList(head);
        fast=insertionSortList(fast);
        return merge(head,fast);
    }
};