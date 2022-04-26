// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      set<int>s;
      for(int i=0;i<n;i++){
          s.insert(arr[i]);
      }
      int maxi=INT_MIN;
      for(int i=0;i<n;i++){
          if(s.find(arr[i]-1)!=s.end()){continue;}
          else{
             int ans=arr[i],c=0;
             while(s.find(ans)!=s.end()){
                 c++;
                 ans++;
             }
             maxi=max(c,maxi);
          }
      }
      if(maxi<1)
      return 1;
      return maxi;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends