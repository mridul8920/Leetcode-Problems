**Algorithm for the Naive Approach**
1. Take another dummy matrix of n*n, and then take the first row of the matrix and put it in the last column of the dummy matrix, take the second row of the matrix, and put it in the second last column of the matrix and so.
**Algorithm for the Optimal Approach**
TC-> O(N^2)              SC-> O(1)
**1. Transpose the matirix. (transpose means make every row a column and every column a row)
2. Reverse every row of the Matirx.
**
```
class Solution {
public:
void rotate(vector<vector<int>>& matrix) {
int n=matrix.size();
for(int i=0;i<n;i++){
for(int j=0;j<i;j++){
swap(matrix[i][j],matrix[j][i]);
}
}
for(int i=0;i<n;i++){
reverse(matrix[i].begin(),matrix[i].end());
}
}
};
```
​
​
​
​
​
​
​
​
​