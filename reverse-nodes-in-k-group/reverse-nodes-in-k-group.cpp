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
    ListNode* reverseKGroup(ListNode* head, int k) {
         ListNode* ptr = head;
         for (int i = 0; i < k; i++) {
            if (!ptr) return head;
            ptr = ptr->next;   
        }
        
        ListNode *p,*c,*n;
        p=NULL;
        c=head;
        int count=0;
        
        while(c!=NULL and count<k){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            count++;
        }
        
        if(n!=NULL){
            head->next=reverseKGroup(n,k);
        }
        
        return p;
    }
};