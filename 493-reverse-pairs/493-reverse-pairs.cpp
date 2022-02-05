class Solution {
public:
    int merge(vector<int>&nums,int lo,int mid,int hi){
        int cnt=0;
        int j=mid+1;
        for(int i=lo;i<=mid;i++){
            while(j<=hi and nums[i]>2LL*nums[j])
                j++;
            cnt+=(j-(mid+1));
        }
        vector<int>v;
        int left=lo,right=mid+1;
        while(left<=mid and right<=hi){
            if(nums[left]<=nums[right])
                v.push_back(nums[left++]);
            else
                v.push_back(nums[right++]);
        }
        while(left<=mid)
            v.push_back(nums[left++]);
        while(right<=hi)
            v.push_back(nums[right++]);
        for (int i = lo; i <= hi; i++) {
            nums[i] = v[i - lo];
        }
        return cnt;
    }
    int mergesort(vector<int>&nums,int lo,int hi){
        if(lo>=hi) return 0;
        int mid=(lo+hi)/2;
        int inv=mergesort(nums,lo,mid);
        inv+=mergesort(nums,mid+1,hi);
        inv+=merge(nums,lo,mid,hi);
        return inv;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};