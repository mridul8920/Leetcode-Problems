class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                char c=st.top();
                st.pop();
                if((s[i]==')' and c=='(') or (s[i]==']' and c=='[') or (s[i]=='}' and c=='{'))
                    flag=1;
                else
                    return false;
            }
        }
        if(st.empty() and flag==1)
            return true;
        return false;
    }
};