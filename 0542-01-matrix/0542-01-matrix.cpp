class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       if(mat.empty() || mat[0].empty()) return {};
      
       queue<pair<int,int>>q;
       int m=mat.size();
       int n=mat[0].size();
        int INT_VALUE=m*n;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==0) q.push({i,j});
            else mat[i][j]=INT_VALUE;
        }
       }
       vector<pair<int,int>>v={{1,0},{-1,0},{0,1},{0,-1}};
       while(!q.empty()){
        auto[r,c]=q.front();
        q.pop();
        for(auto[dr,dc]: v){
            int row=r+dr, col=c+dc;
            if(row>=0 && row<m && col>=0 && col<n && mat[row][col]>mat[r][c]+1){
                q.push({row,col});
                mat[row][col]=mat[r][c]+1;
            }
        }
       }
       return mat;
    }
};