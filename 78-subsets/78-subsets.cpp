class Solution {
public:
    void powerSet(vector<vector<int>>&v,vector<int>&nums,vector<int>vec,int begin){
        v.push_back(vec);
        for (int i = begin; i != nums.size(); ++i) {
			vec.push_back(nums[i]);
			powerSet(v, nums, vec, i + 1);
			vec.pop_back();
            
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        powerSet(v,nums,temp,0);
        return v;
    }
};