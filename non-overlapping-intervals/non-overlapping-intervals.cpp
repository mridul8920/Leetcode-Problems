bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
    public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0)
            return 0;
		sort(intervals.begin(),intervals.end(),comp);
        vector<int>tempInterval=intervals[0];
        int ans=-1;
        for(auto it:intervals){
            if(it[0]<tempInterval[1]){
                ans++;
            }else{
                tempInterval=it;
            }
        }
        return ans;
    }
};