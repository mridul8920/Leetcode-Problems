class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0;
        int hi=nums.size()-1;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(nums[mid]<ans)
                ans=min(nums[mid],ans);
            else if(nums[lo]<nums[mid]){
                ans=min(nums[lo],ans);
                lo=mid+1;
            }
            else{
                ans=min(nums[hi],ans);
                hi=mid-1;
            }
        }
        return ans;
    }
};