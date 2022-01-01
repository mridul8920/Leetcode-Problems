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
    void reorderList(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
         // if (fast->next) slow = slow->next;
        ListNode *cur=slow,*prev=NULL,*n=head;
        while(cur){
            n=cur->next;
            cur->next=prev;
            prev=cur;
            cur=n;
        }
        slow=prev;
        while(slow and head){
            fast=head->next;
            prev=slow->next;
            head->next=slow;
            slow->next=fast;
            slow=prev;
            head=fast;
        }
        if (head && head->next) head->next->next = NULL;
    }
};