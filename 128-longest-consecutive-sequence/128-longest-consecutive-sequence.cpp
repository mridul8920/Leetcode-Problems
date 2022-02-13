class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int longestStreak=0;
        for(int it:s){
            if(!s.count(it-1)){
                int cur=it;
                int curStreak=1;
                while(s.count(cur+1)){
                    cur+=1;
                    curStreak+=1;
                }
                longestStreak=max(longestStreak,curStreak);
            }
        }
        return longestStreak;
    }
};