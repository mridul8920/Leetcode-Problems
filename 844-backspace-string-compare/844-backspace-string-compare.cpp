class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1,s2;
        int size=s.size();
        for(int i=0;i<size;i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            }
            else{
                if(s1.empty() == true){
                    continue;
                }
                s1.pop();
            }
        }
        size=t.size();
       for(int i=0;i<size;i++) {
        if(t[i]!='#'){
                s2.push(t[i]);
            }
            else{
                if(s2.empty() == true){
                    continue;
                }
                s2.pop();
            }
        }
        if(s1.size()!=s2.size())
            return false;
       while(!s1.empty() && !s2.empty()){
            if(s1.top()!=s2.top()){
                return false;
            }
            s1.pop();
            s2.pop();
        }
        return true;
    }
};