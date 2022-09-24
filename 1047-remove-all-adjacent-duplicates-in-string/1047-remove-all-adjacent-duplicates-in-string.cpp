class Solution {
public:
    string removeDuplicates(string s) {
        // stack<char>st;
        // for(int i=0;i<s.size();i++){
        //     if(st.empty())
        //         st.push(s[i]);
        //     else if(s[i]!=st.top())
        //         st.push(s[i]);
        //     else
        //         st.pop();
        // }
        // string ans;
        // while(!st.empty()){
        //     ans.push_back(st.top());
        //     st.pop();
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;
        
        ///simulate inplace stack using a stack pointer
        int stptr=-1;
        for(int i=0;i<s.size();i++){
            if(stptr==-1 || s[i]!=s[stptr]){
                stptr++;
                s[stptr]=s[i];
            }
            else
                stptr--;
        }
        string ans="";
        for(int i=0;i<=stptr;i++){
            ans.push_back(s[i]);
        }
        return ans;
    }
};