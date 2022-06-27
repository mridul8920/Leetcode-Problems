class Solution {
public:
    int t[1001][1001];
    int lcs(string &x,string &y,int m,int n){
        //INITIALIZATION
        for(int i=0;i<m+1;i++)
            for(int j=0;j<n+1;j++)
                 if(i==0 or j==0)
                        t[i][j]= 0;
        //  CHOICE DIAGRAM
         for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(x[i-1]==y[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m][n];
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        memset(t,-1,sizeof(t));
       return lcs(text1,text2,n,m);
    }
};
