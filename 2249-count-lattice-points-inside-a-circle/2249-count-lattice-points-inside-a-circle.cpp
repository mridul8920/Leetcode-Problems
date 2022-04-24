class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int,int>>s;
        for(auto it:circles){
            int r=it[2],x=it[0],y=it[1];
            for(int i=-r;i<=r;i++){
                for(int j=-r;j<=r;j++){
                    if((i*i + j*j) <= r*r)
                        s.insert({i+x,j+y});
                }
            }
        }
        int ans=s.size();
        return ans;
    }
};