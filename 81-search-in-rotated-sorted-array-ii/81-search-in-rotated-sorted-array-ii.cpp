class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(nums[mid]==target)
                 return true;
            
            //FOR DUPLICATE ELEMENTS ADD THIS CONDITION 
            if((nums[lo]==nums[mid]) && (nums[hi]==nums[mid])){
                    lo++;
                    hi--;
            }
            //FOR LEFT HALF
            else if(nums[lo]<=nums[mid]){
                // CHECKING WHETHER TARGET LIES IN THIS LEFT HALF 
                    if(nums[lo]<=target && nums[mid]>=target)
                    hi=mid-1;
                   else lo=mid+1;
            }
            // FOR RIGHT HALF
            else{
                // CHECKING WHETHER TARGET LIES IN THIS RIGHT HALF 
                   if(nums[mid]<=target && nums[hi]>=target)
                    lo=mid+1;    
                   else hi=mid-1;
            }
        }
    return false;
    }
};