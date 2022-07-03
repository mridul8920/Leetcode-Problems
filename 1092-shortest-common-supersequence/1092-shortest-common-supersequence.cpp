class Solution {
public:
    int t[1001][1001];
    string LCS(string x,string y){
        string s;
        int m=x.size(),n=y.size();
        for(int i=0;i<m+1;i++)
            for(int j=0;j<n+1;j++)
                if(i==0 or j==0)
                    t[i][j]=0;
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(x[i-1]==y[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        int i=m,j=n;
        while(i>0 and j>0){
            if(x[i-1]==y[j-1]){
                s.push_back(x[i-1]);
                i--;
                j--;
            }
            else{
                if(t[i][j-1]>t[i-1][j]){
                    s.push_back(y[j-1]);
                    j--;
                }
                else{
                    s.push_back(x[i-1]);
                    i--;
                }
            }
        }
        while(i>0){
             s.push_back(x[i-1]);
                    i--;
        }
        while(j>0){
            s.push_back(y[j-1]);
                    j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        memset(t,-1,sizeof(t));
        return LCS(str1,str2);
    }
};