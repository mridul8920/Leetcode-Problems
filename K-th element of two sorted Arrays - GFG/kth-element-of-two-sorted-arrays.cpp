// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int ptr1=0,ptr2=0;
        int i=1,j=1;
        int ans=0;
        while(k>0){
            if((arr1[ptr1]<arr2[ptr2] && ptr1<n) || ptr2>=m){
                ans=arr1[ptr1];
                k--;
                ptr1++;
            }
            else{
                ans=arr2[ptr2];
                k--;
                ptr2++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends