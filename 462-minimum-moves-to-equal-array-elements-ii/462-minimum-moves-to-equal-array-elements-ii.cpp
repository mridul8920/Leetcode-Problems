class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=0;
        if(nums.size()<2)
            return 0;
        else if(nums.size()==2)
            return abs(nums[1]-nums[0]);
        else{
            sort(nums.begin(),nums.end());
            int m2=nums[nums.size()/2];
            
            for(int i=0;i<nums.size();i++){
                ans+=abs(m2-nums[i]);
            }
            return ans;
        }
        return 0;
    }
};