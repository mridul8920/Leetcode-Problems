```
ListNode *slow=head,*fast=head;
while(n--){
fast=fast->next;
}
if (fast==NULL) return head->next;  //condition if the length of LL == n
while(fast->next!=NULL){
fast=fast->next;
slow=slow->next;
}
slow->next=slow->next->next;
return head;
```