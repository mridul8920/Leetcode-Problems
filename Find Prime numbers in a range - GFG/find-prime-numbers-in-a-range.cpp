// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool isPrime(int n){
      int a=n;
      if(n==1)
      return 0;
      if(n==2 || n==3)
      return 1;
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0)
          return 0;
      }
      return 1;
  }
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int>v;
        for(int i=M;i<=N;i++){
            if(isPrime(i))
                v.push_back(i);
        }
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends