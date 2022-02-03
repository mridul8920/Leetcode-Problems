// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
   long long int xor1;
   long long int set_bit;
   long long int x=0; //missing
   long long int y=0; //repeating
//   long long int n=arr.size();
    xor1=arr[0];
    for(int i=1;i<n;i++)
        xor1^=arr[i];
    for(int i=1;i<=n;i++)
        xor1^=i;
    
    set_bit=xor1 & ~(xor1-1);
    
    for(int i=0;i<n;i++){
        if(set_bit & arr[i])
            x^=arr[i];
        else y^=arr[i];
    }
    for(int i=1;i<=n;i++){
        if(set_bit & i)
            x^=i;
        else y^=i;
    }

   long long int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            flag++;
    }
    int *ans = new int[2];
    if(flag==0){
        ans[0]=y;
        ans[1]=x;
    }
    else {
        ans[0]=x;
        ans[1]=y;
    }
    return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends