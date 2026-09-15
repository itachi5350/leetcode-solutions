class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>>path;
         int m=heights.size();
        int n=heights[0].size();
        vector<vector<bool>>paci(m,vector<bool>(n,false));
        vector<vector<bool>>atlan(m,vector<bool>(n,false));
       
        for(int j=0;j<n;j++){
            dfs(0,j,m,n,heights,paci);
        }
         for(int j=0;j<n;j++){
            dfs(m-1,j,m,n,heights,atlan);
        }
         for(int i=0;i<m;i++){
            dfs(i,0,m,n,heights,paci);
        }
         for(int i=0;i<m;i++){
            dfs(i,n-1,m,n,heights,atlan);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(paci[i][j] && atlan[i][j]) path.push_back({i,j});
            }
        }
        return path;
    }
    void dfs(int i,int j, int m, int n, vector<vector<int>>& heights,vector<vector<bool>>& v ){
        if(i<0 || i>=m || j<0 || j>=n) return;
        if(v[i][j]) return;
        v[i][j]=true;
        if(i+1 < m && heights[i+1][j] >= heights[i][j])
         dfs(i+1,j,m,n,heights,v);
        if(i-1 >= 0 && heights[i-1][j] >= heights[i][j])
         dfs(i-1,j,m,n,heights,v);
        if(j+1 < n && heights[i][j+1] >= heights[i][j])
         dfs(i,j+1,m,n,heights,v);
        if(j-1 >= 0 && heights[i][j-1] >= heights[i][j])
         dfs(i,j-1,m,n,heights,v);
    }
};