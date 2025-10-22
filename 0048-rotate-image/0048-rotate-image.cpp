class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int t=0, b=m-1;
        while(t<b) {
            for(int j=0;j<m;j++){
                swap(matrix[t][j],matrix[b][j]);
            }
                t++;
                b--;
        } 
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
               swap( matrix[i][j],matrix[j][i]);
            }
        }
    }
};