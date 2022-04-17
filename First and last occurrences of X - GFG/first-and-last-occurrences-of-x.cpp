// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
    
        auto y=-1,z=-1;
        vector<int>v;
        y=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        z=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        z=z-1;
        if(arr[y]==x and arr[z]==x){
            v.push_back(y);
            v.push_back(z);
            return v;
        }
        else{
            v.push_back(-1); 
        }
        return v;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends