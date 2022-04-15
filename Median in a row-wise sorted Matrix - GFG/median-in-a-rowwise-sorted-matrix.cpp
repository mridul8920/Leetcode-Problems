// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int CountSmallerThanMid(vector<int>&row,int mid){
        int lo=0, hi=row.size()-1;
        while(lo<=hi){
            int md=(lo+hi)/2;
            if(row[md]<=mid)
                lo=md+1;
            else
                hi=md-1;
        }
        return lo;
    }

    int median(vector<vector<int>> &matrix, int r, int c){
        int lo=1;
        int hi=1e9;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int cnt=0;
            for(int i=0;i<r;i++){
                cnt+=CountSmallerThanMid(matrix[i],mid);
            }
            if(cnt<=r*c/2)
                lo=mid+1;
            else hi=mid-1;
        }
        return lo;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends