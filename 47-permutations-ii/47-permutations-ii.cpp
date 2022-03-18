class Solution {
public:
    void perm(vector<int>arr,int ind,vector<vector<int>>&ds){
        if(ind==arr.size()){
            ds.push_back(arr);
            return;
        }
        for(int i=ind;i<arr.size();i++){
           if(i!=ind and arr[i]==arr[ind]) continue;
           swap(arr[ind],arr[i]);
           perm(arr,ind+1,ds);
           }
	}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ds;
		    perm(nums,0,ds);
		    return ds;
    }
};