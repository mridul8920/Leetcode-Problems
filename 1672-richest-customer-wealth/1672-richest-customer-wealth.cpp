class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int rows=accounts.size(),cols=accounts[0].size();
        int pro=0;
        for(int i=0;i<rows;i++){
            int sum=0;
            for(int j=0;j<cols;j++){
                sum+=accounts[i][j];
                pro=max(pro,sum);
            }
        }
        return pro;
    }
};