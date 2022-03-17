class Solution {
public:
    void findCombi(int ind,int target,vector<int>&candidates,vector<int>&ds,vector<vector<int>>&ans){
        if(ind==candidates.size()){
            if(target==0)
                ans.push_back(ds);
            return;
        }
        
        if(candidates[ind]<=target){
        ds.push_back(candidates[ind]);
        findCombi(ind,target-candidates[ind],candidates,ds,ans);
        ds.pop_back();    
        }
        findCombi(ind+1,target,candidates,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        findCombi(0,target,candidates,ds,ans);
        return ans;
    }
};