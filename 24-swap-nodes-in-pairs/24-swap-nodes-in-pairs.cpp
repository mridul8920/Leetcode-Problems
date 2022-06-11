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
    ListNode* swapPairs(ListNode* head) {
        if(!head or !head->next)
            return head;
        ListNode* dummy=new ListNode();
        ListNode* cur1=head;
        ListNode* prev=dummy;

        while( cur1 and cur1->next){
           prev->next=cur1->next;
            cur1->next=prev->next->next;
            prev->next->next=cur1;
            prev=cur1;
            cur1=cur1->next;
        } 
        return dummy->next;
    }
};