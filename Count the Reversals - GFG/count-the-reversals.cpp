// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    int size=s.size();
    if(size%2!=0) return -1;
    else{
        stack<char>st;
        for(int i=0;i<size;i++){
            if(!st.empty() and st.top()=='{'){
                if(s[i]=='}') st.pop();
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }
        int n=st.size();
        int ctr=0;
        while(!st.empty() and st.top()=='{'){
                st.pop();
                ctr++;
        }
        return (n/2+ctr%2);
    }
    return 0;
}