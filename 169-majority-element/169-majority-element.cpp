class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //MOORE'S VOTING ALGO
            int count=0,ele=0;
        for(int it:nums){
            if(count==0)
                ele=it;
            if(it==ele)
                count+=1;
            else count-=1;
        }
        return ele;
    }
};