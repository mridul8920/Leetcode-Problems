// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxNumbers(int n, int k, int a[]){
        int i,m=0;
        
        set<int> s;
        for(i=0;i<n;i++)
            s.insert(a[i]);
        
        for(i=1;i<k;i++)
        {
            if(s.count(i)==0)
            {
                m+=1;
                k-=i;
            }
        }
            
        return m;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.maxNumbers(n, k, a)<<"\n";
    }
    return 0;
}  // } Driver Code Ends