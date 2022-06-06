// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	/* Returns count of pairs with difference k in arr[] of size n. */
	int countPairsWithDiffK(int arr[], int n, int k) {
	    // code here
	    int count=0;
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	        mp[arr[i]]++;
	    for( int i = 0 ; i<n ; i++)
    {
        int tem = k + arr[i] ;
        if(tem==arr[i])
        {
            count += mp[tem]*(mp[tem]-1)/2  ;
            mp[tem] = 0 ;
        }
        else if(mp.find(tem) != mp.end())
        {
            count += mp[tem] ;
        }
    }
    
    return count ;
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends