// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#include<set>
class Solution{
public:
    void wordBreakUtil(string s,string res,int len,vector<string>&v,unordered_set<string>se){
        for(int i=1;i<=len;i++){
            string pre=s.substr(0,i);
            if(se.find(pre)!=se.end()){
                if(i==len){
                    res+=pre;
                    v.push_back(res);
                }
                wordBreakUtil(s.substr(i,len-i),res+pre+" ",len-i,v,se);
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        // code here
        unordered_set<string>se;
        for(int i=0;i<n;i++){
            se.insert(dict[i]);
        }
        int len=s.size();
        string res="";
        vector<string>v;
        wordBreakUtil(s,res,len,v,se);
        return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends