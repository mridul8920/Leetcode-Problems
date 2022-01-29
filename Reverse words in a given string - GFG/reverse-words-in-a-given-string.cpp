// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string> s;
       string temp="";
       S.push_back('.');
       for(int i=0;i<S.size();i++)
       {
           if(S[i]=='.')
           {
               s.push(temp);
               temp="";
           }
           else
           {
               temp+=S[i];
           }
       }
       string ans="";
       while(!s.empty())
       {
           ans+=s.top();
           s.pop();
           ans+='.';
       }
       ans.pop_back();
       return ans;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends