class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" or tokens[i]=="-" or tokens[i]=="*" or tokens[i]=="/" ){
               long long int a,b;
                a=s.top(); s.pop();
                b=s.top(); s.pop();
                if(tokens[i]=="+"){
                    s.push(b+a);
                }else if(tokens[i]=="-"){
                    s.push(b-a);
                }else if(tokens[i]=="*"){
                    s.push(b*a);
                }else{
                    s.push(b/a);
                }
            }else{
                s.push(atoi(tokens[i].c_str()));
            }
        }
        return s.top();
    }
};