class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int maxh=0;
        int j=2;
        int rred=red,bblue=blue;
        int res=INT_MIN;
        if(red==1 && blue ==1) return 1;
        
        for(int i=1;i<max(red,blue);i+=2){
          rred-=i;
          
          if(rred<0) break;
          maxh++;
          bblue-=j;
          
          if(bblue<0) break;
          maxh++;
          j+=2;
        }
        int red1=red,blue1=blue;
        int maxh2=0;j=2;
        for(int i=1;i<max(red,blue);i+=2){
        blue1-=i;
       
        if(blue1<0) break;
         maxh2++;
        red1-=j;
        if(red1<0) break;
         maxh2++;
        j+=2;
        }
        res=max(maxh,maxh2);
        return res;
    }
};