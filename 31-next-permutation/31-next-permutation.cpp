class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),k,l;
//Linearly traverse array from backward such that ith index value of the array is less than (i+1)th index value. Store that index in a variable.        
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1])
                break;
        } 
//If the index value received from step 1 is less than 0. This means the given input array is the largest lexicographical permutation. Hence, we will reverse the input array to get the minimum or starting permutation. 
        if(k<0)
            reverse(nums.begin(),nums.end());

        else{
// Linearly traverse array from backward. Find an index that has a value greater than the previously found index. Store index another variable.
            for(l=n-1;l>=0;l--){
                if(nums[l]>nums[k])
                    break;
            }
//Swap values present in indices found in the above two steps.
            swap(nums[l],nums[k]);
//Reverse array from index+1 where the index is found at step 1 till the end of the array.
            reverse(nums.begin()+k+1,nums.end());
        }
    }
};