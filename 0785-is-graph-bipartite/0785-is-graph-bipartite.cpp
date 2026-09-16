class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int m=graph.size();
        vector<int>v(m,0);
        for(int i=0;i<m;i++){
          if(v[i]==0){
            v[i]=1;
            if(!dfs(i,v,graph)) return false;
          }
        } 
        return true;
    }
    bool dfs(int u, vector<int> &v,vector<vector<int>>& graph){
        for(int j: graph[u]){
            if(v[j]==0){
                if(v[u]==1) v[j]=2;
                else v[j]=1;
                 if(!dfs(j,v,graph)) return false;
            }
           
            if(v[j]==v[u]) return false;

        }
        return true;
    }
};