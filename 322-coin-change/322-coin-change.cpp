class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int m=coins.size(),sum=amount;
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