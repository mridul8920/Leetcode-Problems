class Solution {
public:
    void solve(vector<int>ip,vector<int>op,vector<vector<int>>&ans){
        if(ip.size()==0){
            ans.push_back(op);
            return;
        }
        vector<int>op1,op2;
        op1=op;
        op2=op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1,ans);
        solve(ip,op2,ans);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ip,op;
        solve(nums,op,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};