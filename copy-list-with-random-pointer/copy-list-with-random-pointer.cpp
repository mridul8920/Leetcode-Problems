/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // SO BASICALLY THE SOLUTION OF THIS PROBLEM IS DIVIDED IN 3 PARTS
        // 1)CREATE COPIES OF THE NODES AND INSERT THEM IN B/W THE ORIGINAL NODES
        // E.G-                         1->2->3->4->NULL
        // AFTER STEP 1) LL BECOMES     1->1'->2->2'->3->3'->4->4'->NULL
        Node *iter=head;
        Node *front;
        while(iter){
            front=iter->next;
            Node *copy=new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            iter=front;
        }
        
        // STEP 2) POINT THE RANDOM POINTERS FOR THE COPY LL
        iter=head;
        while(iter){
            if(iter->random!=NULL){
                iter->next->random=iter->random->next;
            }

            iter=iter->next->next;
        }
        
        //STEP 3) POINT THE NEXT POINTERS CORRECTLY FOR BOTH THE ORIGINAL AND THE COPIED LL
         iter = head;
          Node *pseudoHead = new Node(0);
          Node *copy = pseudoHead;

          while (iter != NULL) {
            front = iter->next->next;

            // extract the copy
            copy->next = iter->next;

            // restore the original list
            iter->next = front;
              
            copy = copy -> next; 
            iter = front;
          }
          return pseudoHead->next;
    }
};