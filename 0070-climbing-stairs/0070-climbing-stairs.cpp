class Solution {
public:
    unordered_map<int,int>m;
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;
        if(m.find(n)!=m.end()) return m[n];
        return m[n]=climbStairs(n-1)+climbStairs(n-2);
        
    }
};