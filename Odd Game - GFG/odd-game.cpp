// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long oddGame(long long N) {
        // code here
        if(N==1)
        return N;
        long long ans=2;
        N/=2;
        while(N>1){
            N/=2;
            ans*=2;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.oddGame(N) << endl;
    }
    return 0;
}  // } Driver Code Ends