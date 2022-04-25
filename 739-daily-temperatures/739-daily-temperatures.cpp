class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<pair<int,int>>s;
        vector<int>ans;
        int n=arr.size();
        s.push({n-1,arr[n-1]});
        ans.push_back(0);
        for(int i=n-2;i>=0;i--){
            while(s.empty()==false and s.top().second<=arr[i])
                s.pop();
            int nextGr= s.empty() ? 0 : (s.top().first) - i;
            ans.push_back(nextGr);
            s.push({i,arr[i]});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};