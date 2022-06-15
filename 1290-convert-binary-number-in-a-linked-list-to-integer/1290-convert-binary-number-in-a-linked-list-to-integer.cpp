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
    ListNode* reverse(ListNode*head){
        if(head==NULL)
            return head;
        ListNode*cur=head,*prev=NULL,*nexti=NULL;
        while(cur){
            nexti=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nexti;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        head=reverse(head);
       long long int i=0,ans=0;
        while(head!=NULL){
            ans=ans+head->val*pow(2,i);
            i++;
            head=head->next;
        }
        return ans;
    }
};