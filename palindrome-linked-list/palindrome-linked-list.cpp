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
    ListNode* reverseList(ListNode*head){
        ListNode *p=NULL,*n=NULL;
        while(head!=NULL){
            n=head->next;
            head->next=p;
            p=head;
            head=n;
        }
        return p;
    }
public:
    bool isPalindrome(ListNode* head) {
       if(head==NULL||head->next==NULL)
        return true;
        ListNode *slow=head,*fast=head;
        while(fast->next and fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
       slow->next=reverseList(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};