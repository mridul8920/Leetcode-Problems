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
    ListNode* reverse(ListNode* head){
        ListNode*prev=NULL,*cur=head,*next=NULL;
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         l1=reverse(l1);
         l2=reverse(l2);
        if(!l1)
            return l2;
        if(!l2)
            return l1;
       
        ListNode *head,*dummy;
        head=dummy=new ListNode(-1);
        int carry=0;
        while(l1 or l2){
            int first=l1 ? l1->val : 0;
            int second=l2 ? l2->val : 0;
           
            int total=first+second+carry;
            carry=total/10;
            total=total%10;
            ListNode* newNode=new ListNode(total);
            dummy->next=newNode;
            dummy=dummy->next;
            
            l1=l1?l1->next:l1;
            l2=l2?l2->next:l2;
        }
        if(carry)
            dummy->next=new ListNode(1);
        
        return reverse(head->next);
    }
};