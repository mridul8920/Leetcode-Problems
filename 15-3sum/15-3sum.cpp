class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        //1. sort the array
        sort(nums.begin(),nums.end());
        for(int i=0;i<(int)(nums.size())-2;i++){
            if(i==0 ||(i>0 and nums[i-1]!=nums[i])){
                int lo=i+1,hi=nums.size()-1,sum=0-nums[i];
                while(lo<hi){
                    if(nums[lo]+nums[hi]==sum){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        v.push_back(temp);
                        while(lo<hi and nums[lo]==nums[lo+1]) lo++;
                        while(lo<hi and nums[hi]==nums[hi-1]) hi--;
                        lo++;
                        hi--;
                    }
                   else if (nums[lo] + nums[hi] < sum) lo++;
                    else hi--;
                }
            }
                
        }
        return v;
    }
};