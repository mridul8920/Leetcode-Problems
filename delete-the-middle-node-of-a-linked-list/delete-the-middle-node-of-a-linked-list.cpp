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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *f,*s,*p;
        f=head;
        s=head;
        if(head->next==NULL){
            ListNode *temp;
            temp=head;
            delete(temp);
            head=NULL;
        }
        else{
            while(f!=NULL and f->next!=NULL){
                p=s;
                s=s->next;
                f=f->next->next;
            }
            p->next=s->next;
            delete(s);
        }
        return head;
    }
};