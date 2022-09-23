class Solution {
public:
    bool ispalindrome(string &A,int s,int e){
        while(s<=e){
            // int cnt=0;
            if(A[s]!=A[e]){
                 return false;
            }
            s++; e--;
        }
        return true;
    }
    bool validPalindrome(string A) {
         int s=0;
        int n=A.size();
        int e=n-1;
        while(s<=e){
            if(A[s]!=A[e]){
                 return ispalindrome(A, s+1, e) || ispalindrome(A, s, e-1);
            }
            s++; e--;
        }
        return true;
    }
};