class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool>seen(nums.size()+1);
        vector<int>v;
        for(auto it:nums) seen[it]=true;
        for(int i=1;i<=nums.size();i++){
            if(seen[i]!=true) v.push_back(i);
        }
        return v;
        
    }
};
