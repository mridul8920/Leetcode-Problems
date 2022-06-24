// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int m, int sum) 
	{ 
	    long long int t[m+1][sum+1];
	    //1st ROW and 1st COL INITIALISED
        for(int i=0; i<sum+1; i++){
	        t[0][i] = INT_MAX-1;
	    }
	    for(int i=1; i<m+1; i++){
	        t[i][0] = 0;
	    }
        //2nd ROW INITIALISED
        for(int j=1;j<sum+1;j++){
            if(j%coins[0]==0)
            t[1][j]=j/coins[0];
            else 
            t[1][j]=INT_MAX-1;
        }
        for(int i=2;i<m+1;i++){
            for(int j=1;j<sum+1;j++){
                if(coins[i-1]<=j)
                t[i][j]=min(1+t[i][j-coins[i-1]],t[i-1][j]);
                else
                t[i][j]=t[i-1][j];
            }
        }
        if(t[m][sum] == INT_MAX-1)
	    {
	        return -1;
	    }
        return t[m][sum];
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends