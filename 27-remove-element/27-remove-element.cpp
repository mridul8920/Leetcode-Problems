class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    if(nums.size()==2){
            if(nums[0]==val and nums[1]!=val){
            swap(nums[0],nums[1]);
        return 1;
            }
        if(nums[0]==val and nums[1]==val)
            return 0;
        }
        if(nums.size()>2){
            int p1=0,p2=1;
            for(int i=2;i<=nums.size();i++){
                    if((nums[p1]==val and nums[p2]!=val)){
                        swap(nums[p1],nums[p2]);
                        p1++;
                        p2++;
                    }
                else if(nums[p1]==val and nums[p2]==val){
                        p2++;
                    }
                else if((nums[p1]!=val and nums [p2]!=val) or (nums[p1]!=val and nums[p2]==val)){
                    p1++;
                    p2++;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                cnt++;
                // break;
            }
        }
        return cnt;
    }
};