class Solution {
public:
     void findCombi(int ind,int target,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans,int k){
            if(target==0 and ds.size()==k){
                ans.push_back(ds);
                return;
            }
    
        for(int i=ind;i<arr.size();i++){
        if(i>ind and arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        findCombi(i+1,target-arr[i],arr,ds,ans,k);
        ds.pop_back();    
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>>ans;
        vector<int>candidates={1,2,3,4,5,6,7,8,9};
        // sort(candidates.begin(),candidates.end());
        findCombi(0,n,candidates,ds,ans,k);
        return ans;
    }
};