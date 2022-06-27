class Solution {
public:
    int t[1001][1001];
    int lcs(string &x,string &y,int n,int m){
        if(n==0 or m==0)
            return 0;
        if(t[n][m]!=-1)
            return t[n][m];
        if(x[n-1]==y[m-1])
            return t[n][m]=1+lcs(x,y,n-1,m-1);
        else
            return t[n][m]=max(lcs(x,y,n-1,m),
                       lcs(x,y,n,m-1));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        memset(t,-1,sizeof(t));
       return lcs(text1,text2,n,m);
    }
};
