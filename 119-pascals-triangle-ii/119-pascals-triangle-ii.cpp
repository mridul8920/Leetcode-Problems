class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Method--1
        // vector<vector<int>>arr(rowIndex+1);
        // for(int i=0;i<rowIndex+1;i++){
        //     arr[i].resize(i+1);
        //     arr[i][0]=arr[i][i]=1;
        //     for(int j=1;j<i;j++)
        //         arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        // }
        // return arr[rowIndex];
        
        // Method--2 (The basic idea is to iteratively update the array from the end to the beginning.) TC-> O(K)
        vector<int>arr(rowIndex+1,0); //Intitialising all the elements of vector with zero. 
        arr[0]=1;   //We know that first and last element are 1 always
        for(int i=1;i<(rowIndex+1);i++){   //loop starting  from 1 as arr[0] already assigned
            for(int j=i;j>=1;j--){
                arr[j]+=arr[j-1];       
            }        
        }
        return arr;
    }
};