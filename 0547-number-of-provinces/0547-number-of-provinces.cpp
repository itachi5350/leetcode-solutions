class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<bool>v(n,false);
        for(int i=0;i<n;i++){
            if(v[i]==false){
                dfs(i,n,v,isConnected);
                count++;
            }
        }
        return count;
    }

    void dfs(int i,int n, vector<bool>&v,vector<vector<int>>& isConnected){
        v[i]=true;
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1 && v[j]!=true)
            dfs(j,n,v,isConnected);
        }
    }
};