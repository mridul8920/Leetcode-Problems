//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
void solve(int ones,int zero,string op,vector<string>&v,int n){
    if(n==0){
        v.push_back(op);
        return;
    }
        string op1=op;
        op1.push_back('1');
        solve(ones+1,zero,op1,v,n-1);
    if(ones>zero){
        string op2=op;
        op2.push_back('0');
        solve(ones,zero+1,op2,v,n-1);
        return;
    }
}
	vector<string> NBitBinary(int N)
	{
    	vector<string>v;
        string op="";
        int ones=0,zero=0;
        solve(ones,zero,op,v,N);
        return v;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends