class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0,ms=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++){
         cs+=nums[i];
         ms=max(cs,ms);
         if(cs<0)cs=0;
        }
        return ms;
    }
};