class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==2){
            if(nums[0]==0)
            swap(nums[0],nums[1]);
        }
        if(nums.size()>2){
            int p1=0,p2=1;
            for(int i=2;i<=nums.size();i++){
                    if((nums[p1]==0 and nums[p2]!=0)){
                        swap(nums[p1],nums[p2]);
                        p1++;
                        p2++;
                    }
                else if(nums[p1]==0 and nums[p2]==0){
                        p2++;
                    }
                else if((nums[p1]!=0 and nums [p2]!=0) or (nums[p1]!=0 and nums[p2]==0)){
                    p1++;
                    p2++;
                }
            }
        }
    }
};