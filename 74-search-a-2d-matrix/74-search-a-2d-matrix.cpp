class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(),m=mat[0].size();
        if(!mat.size()) return false;
        int lo=0;
        int hi=(n*m)-1;
        while(lo<=hi){
            int mid=(lo+(hi-lo)/2);
            if(mat[mid/m][mid%m]==target)
                return true;
            else if(mat[mid/m][mid%m]<target)
                lo=mid+1;
            else hi=mid-1;
        }
        return false;
    }
};