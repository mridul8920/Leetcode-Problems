class Solution {
public:
    bool isPalindrome(string A) {
        int s=0;
        int n=A.size();
        int e=n-1;
        while(s<=e){
            while(s<e and !isalnum(A[s])) s++;
            while(s<e and !isalnum(A[e])) e--;
            if(toupper(A[s])!=toupper(A[e]))
                return false;
            s++; e--;
        }
        return true;
    }
};