// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int t[1001][1001];
    int lcs(string &x,string &y,int n,int m){
        if(n==0 or m==0)
            return 0;
        if(t[n][m]!=-1)
            return t[n][m];
        if(x[n-1]==y[m-1])
            return t[n][m]=1+lcs(x,y,n-1,m-1);
        else
            return t[n][m]=max(lcs(x,y,n-1,m),
                       lcs(x,y,n,m-1));
    }
    int lcs(int x, int y, string s1, string s2)
    {
        memset(t,-1,sizeof(t));
       return lcs(s1,s2,x,y);
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends