class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size(),0);
        for(int i=0;i<graph.size();i++){
           if(color[i]==0){
            color[i]=1;
            if(!dfs(i,graph,color)) return false;
            }
        }
       return true;
    }
   bool dfs(int u,vector<vector<int>>& graph,vector<int>&color){
     for(int j : graph[u]){
        if(color[j]==0){
           color[j]=3-color[u];
         if(!dfs(j,graph,color)) return false;
     }
     else if(color[j]==color[u]) return false;
   }
   return true;
   }
};