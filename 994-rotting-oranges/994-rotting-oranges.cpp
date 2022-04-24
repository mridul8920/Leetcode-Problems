class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m=grid.size(),n=grid[0].size(),tot=0,days=0,cnt=0;
        queue<pair<int,int>>rotten;     //taking queue to perform bfs
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) tot++;        //calculate the total orange in the grid
                if(grid[i][j]==2) rotten.push({i,j});        //Initially push all rotten oranges to queue
            }
        }
        int dx[4] ={0,0,1,-1};      //TO MOVE IN THE 4 DIRECTIONS 
        int dy[4] ={1,-1,0,0};      //TO MOVE IN THE 4 DIRECTIONS 
        while(!rotten.empty()){
            int k=rotten.size();
            cnt+=k;     //taking count to keep record of the oranges that got rotten
            while(k--){     //APPLYING BFS ON ROTTEN ORANGES
                int x=rotten.front().first, y=rotten.front().second;
                rotten.pop();
                for(int i=0;i<4;i++){       //CHECKING IN THE FOUR DIRECTIONS
                    int nx=x+dx[i], ny=y+dy[i];
                    if(nx<0 || ny<0 || nx>=m || ny>=n || grid[nx][ny]!=1) 
                        continue;
                    grid[nx][ny]=2;     //MARKING ORANGE AS ROTTEN
                    rotten.push({nx,ny});   //PUSHING THE NEW X AND NEW Y COORDINATE OF ROTTEN ORANGE
                }
            }
            if(!rotten.empty()) days++;
        }
        return tot==cnt?days:-1;
    }
};