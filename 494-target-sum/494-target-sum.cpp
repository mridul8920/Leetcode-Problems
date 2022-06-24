class Solution {
public:
    int CountSubsets(vector<int>&nums,int n,int m){
        int t[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0)
                    t[i][j]=0;
                if(j==0)
                    t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
    
        return t[n][m];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        target=abs(target);
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        int m=(target+sum)/2;
        
        if(sum<target||(sum+target)%2!=0)
            return 0;
        return CountSubsets(nums,n,m);
    }
};