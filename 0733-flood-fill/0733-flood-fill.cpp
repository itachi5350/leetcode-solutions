class Solution {
public:
  void dugu(vector<vector<int>>& image, int i, int j,int val, int newcolor){
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j]==newcolor || image[i][j]!=val) return;
        image[i][j]=newcolor;
        dugu(image, i-1,j,val,newcolor);
        dugu(image,i+1,j,val,newcolor);
        dugu(image,i,j-1,val,newcolor);
        dugu(image,i,j+1,val,newcolor);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        dugu(image, sr,sc,val,color);
        return image;
    }
  
};