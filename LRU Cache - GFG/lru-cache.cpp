// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way

class LRUCache
{
    private:

    public:
    //Constructor for initializing the cache capacity with the given value.
    class node{
        public:
            int key;
            int val;
            node* next;
            node* prev;
        node(int _key,int _val){
            key=_key;
            val=_val;
        }
    };
    //we took head and tail so that always we have someone in back and front to avoid writing multiple if checks for NULL
    node* head=new node(-1,-1);
    node* tail=new node(-1,-1);
    int cap;
    unordered_map<int,node*>m;
    
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    //function to add node after head
    void addnode(node* newnode){
        node* temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }
    //function to delete a specific node
    void deletenode(node *delnode){
        node* delprev=delnode->prev;
        node* delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    
    int get(int key_) {
       if(m.find(key_)!=m.end()){   
    //if key found int the hashmap then replace the vlaue and reinsert the node again to fulfill LRU condition
           node* resnode=m[key_];
           int res=resnode->val;
           m.erase(key_);
           deletenode(resnode);
           addnode(resnode);
           m[key_]=head->next;
           return res;
       }
    //if key not found then return -1
        return -1;
    }
    
    void set(int key_, int value) {
    //if able to find the guy then remove the previous value and insert the new value and remove the current node    
     if(m.find(key_)!=m.end()){   
            node* existingnode=m[key_];
            m.erase(key_);
            deletenode(existingnode);
        }
        if(m.size()==cap){      //if no space then remove the LRU guy from the map and list
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        // reinsert the node to fulfill the condition of LRU
        addnode(new node(key_,value));
        m[key_]=head->next;
    }

};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends