class Solution {
public:
    bool isPerfectSquare(int num) {
       if(num==1 || num==0) return num;
       int l=1,r=num;
       long long mid;
       while(l<=r){
        mid=l+(r-l)/2;
        if(long(mid*mid)>num) r=mid-1;
        else if(mid*mid==num) return mid;
        else l=mid+1;
       } 
       return false;
    }
};