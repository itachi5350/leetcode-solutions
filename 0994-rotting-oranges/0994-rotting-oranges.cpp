class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int f=0;
        queue<pair<int,int>>q;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) q.push({i,j});
                else if(grid[i][j]==1) f++;
            }
        }
        int c=0;
        while(!q.empty() && f>0){
            int s=q.size();
            for(int k=0;k<s;k++){
              auto [x,y]=q.front();
              q.pop();
              for(int d=0;d<4;d++){
                int nx=x+dx[d];
                int ny=y+dy[d];
                if(nx<0 || ny<0 || nx>=m || ny>=n) continue;
                if(grid[nx][ny]!=1) continue;
                grid[nx][ny]=2;
                f--;
                q.push({nx,ny});
              }
              
            }
            c++;
        }
        return f==0?c:-1;
    }
};