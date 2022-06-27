// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
     int t[1001][1001];
    int lcs(string &x,string &y,int m,int n){
        //INITIALIZATION
        for(int i=0;i<m+1;i++)
            for(int j=0;j<n+1;j++)
                 if(i==0 or j==0)
                        t[i][j]= 0;
        //  CHOICE DIAGRAM
         for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(x[i-1]==y[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=0;
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                ans=max(ans,t[i][j]);
            }
        }
        return ans;
    }
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        memset(t,-1,sizeof(t));
       return lcs(S1,S2,n,m);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends