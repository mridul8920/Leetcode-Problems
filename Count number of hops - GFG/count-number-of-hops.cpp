// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long f(vector<int>&dp,int n){
       if(n==0)
        return 1;
        if(n==1)
        return 1;
        if(dp[n]!=-1)
        return dp[n];

        return  dp[n]=(f(dp,n-1)+f(dp,n-2)+f(dp,n-3))%1000000007;
    }
    long long countWays(int n)
    {
        vector<int>dp(n+1,-1);
       
        return f(dp,n);
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends