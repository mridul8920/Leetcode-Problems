class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         Method --1
//                     int i;
//         sort(nums.begin(),nums.end());
//        for(i=0;i<nums.size();i++){
//            if(nums[i]==nums[i+1])
//                break;
           
//        }
//          return nums[i];
        
        
//         Method --2
            
            for(int i=0;i<nums.size();i++){
             int m=abs(nums[i])-1;
             if(nums[m]>0)
                 nums[m]=-nums[m];
             else
                 return abs(m)+1;
         }
         return -1;
        
        
//           Method --3
              
//       int slow=nums[0],fast=nums[0];
//         do{
//             slow=nums[slow];
//             fast=nums[nums[fast]];
//         }while(slow!=fast);
//         fast=nums[0];
//         while(slow!=fast){
//             slow=nums[slow];
//             fast=nums[fast];
//         }
//         return fast;
    // }
    }
};