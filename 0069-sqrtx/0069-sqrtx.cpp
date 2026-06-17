class Solution {
public:
    int mySqrt(int x) {
       if(x==1 || x==0) return x;
       int l=1,r=x,mid;
       while(l<=r){
        mid=l+(r-l)/2;
        if(pow(mid,2)>x) r=mid-1;
        else if(pow(mid,2)==x) return mid;
        else l=mid+1;
       }
       return r;
    }
};