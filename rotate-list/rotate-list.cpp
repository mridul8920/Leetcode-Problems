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
    ListNode* rotateRight(ListNode* head, int k) {
       //EDGE CASES
        if(!head || !head->next || k==0){
            return head;
        }
        //CALCULATING LENGTH OF LL
        int len=1;
        ListNode *cur=head;
        while(cur->next){
            len++;
            cur=cur->next;
        }
        //MAKING LL A CIRCULAR LL
        cur->next=head;
        k=k%len;        //IF K>LEN THEN CALCULATING VALUE WITHIN LEN
        k=len-k;        //CALCULATING THAT POINT WHICH BECOMES THE LAST NODE AFTER ALL OPERATIONS

        while(k--) cur=cur->next;   //TRAVERSING TILL THE NODE WHICH HAS TO BE MADE THE LAST NODE

        head=cur->next;         //MAKING THE NEW HEAD
        cur->next=NULL;         //ASSIGNING NULL TO THE NODE WHICH BECOMES LAST  NODE
        return head;
    }
};