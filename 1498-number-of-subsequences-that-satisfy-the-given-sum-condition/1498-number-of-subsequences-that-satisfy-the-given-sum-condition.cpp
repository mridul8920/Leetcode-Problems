class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>pow2(n+1,1);
        int mod=1000000007,res=0;
        for(int i=1;i<=n;i++){
            pow2[i]=2*pow2[i-1]%mod;
        }    
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(nums[j]+nums[i]<=target)
            {
                res=(res+pow2[j-i])%mod;
                i++;
            }
            else
                j--;
        }
        return res;
    }
};