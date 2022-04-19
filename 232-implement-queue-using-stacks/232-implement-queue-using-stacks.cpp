class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>input,output;
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int ans;
        if(output.empty()==false){
            ans=output.top();
            output.pop();
            }
        else{
            while(input.empty()==false){
                output.push(input.top());
                input.pop();
            }
            ans=output.top();
            output.pop();
        }
        return ans;
    }
    
    int peek() {
        int ans;
        if(output.empty()==false){
            return output.top();
            }
        else{
            while(input.empty()==false){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
        if(output.size()==0 and input.size()==0)
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */