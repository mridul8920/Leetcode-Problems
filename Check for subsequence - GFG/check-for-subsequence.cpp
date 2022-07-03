// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends

class Solution{
    public:
    
    bool isSubSequence(string A, string B) 
   {
       if(A.length() > B.length()) return 0;
       if(A == B) return 1;
       
       int j=0;
       
       for(int i=0; i<B.length(); i++)
        {
            if(A[j]==B[i])
            {
                if(j==A.length()-1) return 1;
             j++;
            }
        }
       
       return 0;
       
       
   }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends