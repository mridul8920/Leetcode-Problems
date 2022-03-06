class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        long long start=1,ans=0;
        for(auto it:m){
            long long l=start;
            long long r=it.first;
            if(k>(r-l)){
                k=k-(r-l);
            }
            else break;
            ans+=(r*(r-1))/2-(l*(l-1))/2;
            start=r+1;
        }
        long long l=start;
         long long r=start+k;
        ans+=(r*(r-1))/2-(l*(l-1))/2;
        start=r+1;
        return ans;
    }
};