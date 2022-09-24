class Solution {
public:
    class Pair{
        public:
        char first;     //to store character
        int  second;    //to store count of character
        Pair(char first,int second){
            this->first=first;
            this->second=second;
        }
    };
    string removeDuplicates(string s, int k) {
        stack<Pair>st;
        for(int i=0;i<s.size();i++){
            if(st.empty() or s[i]!=st.top().first){
                Pair p(s[i],1);
                st.push(p);
            }else{
                st.top().second++;
                int count=st.top().second;
                if(count==k)
                    st.pop();
            }
        }
        string ans="";
        while(!st.empty()){
            int count=st.top().second;
            while(count--)
                ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};