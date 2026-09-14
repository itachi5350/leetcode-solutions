class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,m,n,grid);
                    count++;
                }
            }
        }
        
         return count;
    }

    void  dfs(int i,int j,int m, int n,vector<vector<char>>& grid){
        if(i<0 || i>=m || j<0 || j>=n|| grid[i][j]!='1'|| grid[i][j]=='2') return;
        grid[i][j]='0';
        dfs(i-1,j,m,n,grid);
        dfs(i+1,j,m,n,grid);
        dfs(i,j-1,m,n,grid);
        dfs(i,j+1,m,n,grid);
        }
};