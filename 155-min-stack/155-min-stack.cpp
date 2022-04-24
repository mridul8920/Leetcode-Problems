class MinStack {
    stack<long long>st;
    long long mini;
public:
    MinStack() {
        while(!st.empty()) st.pop();
        mini=INT_MAX;   
    }
    
    void push(int value) {
        long long val=value;
        if(st.empty()){     //IF STACK IS EMPTY SIMPLY PUSH THE VALUE
            mini=val;
            st.push(val);
        }
        else{       //IF STACK IS NOT EMPTY
            if(val<mini){       // IF VALUE < MINI
                st.push(2*val*1LL-mini);    //APPLY FORMULA AND STORE THE MODIFIED VALUE
                mini=val;       //REASSIGN ACTUAL VALUE TO MINI
            }
            else{       // IF VALUE > MINI
                st.push(val);       // SIMPLY PUSH THE VALUE
            }
        }
    }
    
    void pop() {
        if(st.empty())      //IF STACK EMPTY SIMPLY RETURN 
            return;
        long long ele=st.top();     // STORE VALUE OF TOP BEFORE POPPING OUT
        st.pop();
        if(ele<mini){       //CHECK IF ELE < MINI UPDATE MINI
            mini=2*mini-ele;    //FORMULA USED TO UPDATE MINI
        }
    }
    
    int top() {
        if(st.empty())      //IF STACK IS EMPTY RETURN -1
            return -1;
        long long ele=st.top();     
        if(ele<mini)        //CHECK IF ELE < MINI THEN RETURN MINI AS IT HOLDS THE ACTUAL VALUE
            return mini;
        else 
            return ele;     //ELSE RETURN THE TOP 
    }
    
    int getMin() {
        return mini;    //SIMPLY RETURN THE MINI AS IT HOLDS THE MINIMUM VALUE
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */