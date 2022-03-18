// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void perm(string &s,int ind,vector<string>&ds){
	        
	        if(ind==s.size()){
	            ds.push_back(s);
	        }
	        for(int i=ind;i<s.size();i++){
	            swap(s[ind],s[i]);
	            perm(s,ind+1,ds);
	            swap(s[ind],s[i]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ds;
		    perm(S,0,ds);
		    sort(ds.begin(),ds.end());
		    return ds;
		}
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends