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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *node=new ListNode(0);
        ListNode *head=node;
        if(list1==NULL and list2==NULL)
            return list1;
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        while(list1!=NULL and list2!=NULL){
            if(list1->val<=list2->val)
            {
                node->next=list1;
                list1=list1->next;
            }
            else{
                node->next=list2;
                list2=list2->next;
            }
            node=node->next;
        }
        node->next=list1?list1:list2;
        return head->next;
    }
};