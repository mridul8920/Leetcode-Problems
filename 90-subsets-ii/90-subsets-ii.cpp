class Solution {
public:
    void solve(vector<int>ip,vector<int>op,set<vector<int>>&s){
        if(ip.size()==0){
            s.insert(op);
            return;
        }
        vector<int>op1,op2;
        op1=op;
        op2=op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1,s);
        solve(ip,op2,s);
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        set<vector<int>>s;
        vector<int>op;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        solve(arr,op,s);
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};