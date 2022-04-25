// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int knows(int a,int b,vector<vector<int> >& M){
        return M[a][b];
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        int count=n-1;
        while(count--){
            int first=s.top();
            s.pop();
            int second=s.top();
            s.pop();
            if(knows(first,second,M)){
                s.push(second);
            }
            else {
                s.push(first);
            }
        }
         int t=s.top();
         for(int i=0;i<n;i++){
            if(i!=t){
                 if(M[i][t]==0 || M[t][i]==1)
                 return -1;
            }
        }
     return t;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends