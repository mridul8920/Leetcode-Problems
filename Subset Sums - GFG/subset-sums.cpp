// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void subSum(vector<int> arr, int n,vector<int>&temp,int s,int i){
        if(i==n){
            temp.push_back(s);
            return;
        }
        s+=arr[i];        
        subSum(arr,n,temp,s,i+1);
        s-=arr[i];
        subSum(arr,n,temp,s,i+1);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>temp;
        subSum(arr,N,temp,0,0);
        return temp;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends