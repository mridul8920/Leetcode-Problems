// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  void SubsetSum(int nums[],int range,vector<int>&v,int n){
        // int n=nums.size();
       int t[n+1][range+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<range+1;j++){
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<range+1;j++){
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j-nums[i-1]] or t[i-1][j];
                else 
                    t[i][j]=t[i-1][j];
            }
        }
        for(int i=0;i<=range/2;i++){
            if(t[n][i]==1)
                v.push_back(i);
        }
    }
	int minDifference(int nums[], int n)  { 
	    vector<int>v;
        int range=0;
        for(int i=0;i<n;i++)
            range+=nums[i];
        SubsetSum(nums,range,v,n);
        int mn=INT_MAX;
        for(int i=0;i<v.size();i++)
            mn=min(mn,(range-2*v[i]));
        return mn;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends