class Solution {
public:
    void allPerm(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,vector<int> freq){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                ds.push_back(nums[i]);
                freq[i]=1;
                allPerm(nums,ds,ans,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        vector<int> freq(nums.size(),0);
        allPerm(nums,ds,ans,freq);
        return ans;
    }
};