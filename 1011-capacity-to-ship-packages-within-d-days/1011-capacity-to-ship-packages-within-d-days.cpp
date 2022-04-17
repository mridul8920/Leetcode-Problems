class Solution {
public:
    bool isPossible(vector<int>&arr,int days,int mid){
        int cnt=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>mid)
                return false;
            if(arr[i]+sum>mid){
                cnt++;
                sum=arr[i];
            }
            else
                sum+=arr[i];
        }
        if(cnt>days)
            return false;
        return true;
    }
    int shipWithinDays(vector<int>& arr, int days) {
        // sort(arr.begin(),arr.end());
        if (days > arr.size()) return -1;
        int lo=arr[0];
        int hi=0;
        for(int i=0;i<arr.size();i++){
            hi+=arr[i];
            lo=min(lo,arr[i]);
        }
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(isPossible(arr,days,mid))
                hi=mid-1;
            else lo=mid+1;
        }
        return lo;
    }
};