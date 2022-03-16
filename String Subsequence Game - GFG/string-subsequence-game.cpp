// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void subseq(int ind,string s, set<string>&str,string temp,string vowel){
      if(ind==s.size()){
          if(temp.size()>0){
            int ch1,ch2;
            ch1=temp[0];
            ch2=temp[temp.size()-1];
            if((vowel.find(ch1))!=string::npos and (vowel.find(ch2))==string::npos)
                str.insert(temp);
            }
            return;
        }
      subseq(ind+1,s,str,temp,vowel); //take 
      temp.push_back(s[ind]);
      subseq(ind+1,s,str,temp,vowel); //not take
  }
    set<string> allPossibleSubsequences(string S) {
        // code here
        string vowel={'a','e','i','o','u'};
        set<string>str;
        string temp="";
        subseq(0,S,str,temp,vowel);
        return str;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}
  // } Driver Code Ends