class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        int sum[n];
        sum[0]=nums[0];
        for(int i=1;i<n;i++){
            sum[i]=nums[i]+sum[i-1];
        }
        int ls=0,rs=0;
        for(int i=0;i<n;i++){
            ls=sum[i]-nums[i];
            rs=sum[n-1]-sum[i];
            if(ls==rs)
                return i;
        }
        return -1;
    }
};