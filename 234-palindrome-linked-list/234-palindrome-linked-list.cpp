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
    ListNode *reverse(ListNode*head){
        ListNode *p=NULL,*c=head,*n;
        while(c){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return true;
        ListNode *s=head,*f=head;
        while(f and f->next){
            s=s->next;
            f=f->next->next;
        }
        s=reverse(s);
        while(s!=NULL){
            if(s->val!=head->val)
                return false;
            head=head->next;
            s=s->next;
        }
        return true;
    }
};