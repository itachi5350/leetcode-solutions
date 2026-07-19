class Solution {
public:
    int climbStairs(int n, unordered_map<int,int>& m){
        if(n==0 || n==1) return 1;
        if(m.find(n)==m.end()){
            m[n]=climbStairs(n-1,m)+climbStairs(n-2,m);
        }
        return m[n];
    }
    int climbStairs(int n) {
        unordered_map<int,int>m;
        return climbStairs(n,m);
    }
};