class Solution {
public:
    void merge(vector<int>& arr1, int n, vector<int>& arr2, int m) {
        int gap=ceil((float)(m+n)/2);
        while(gap>0){
            int i=0,j=gap;
            while(j<(n+m)){
                if(j<n and arr1[i]>arr1[j])
                    swap(arr1[i],arr1[j]);
                else if(i<n and j>=n and arr1[i]>arr2[j-n])
                    swap(arr1[i],arr2[j-n]);
                else if(i>=n and j>=n and arr2[i-n]>arr2[j-n])
                    swap(arr2[i-n],arr2[j-n]);
                
                i++;
                j++;
            }
            
            if(gap==1)
                gap=0;
            else 
                gap=ceil((float)gap/2);
        }
        int j=0;
        for(int i=n;i<(n+m);i++){
            arr1[i]=arr2[j];
            j++;
        }
    }
};