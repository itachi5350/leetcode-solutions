class Solution {
public:
    int countPrimes(int n) {
        vector<bool>p(n+1,true);
        int c=0;
        p[0]=p[1]=false;
        for(int i=2;i<n;i++){
            if(p[i]){
                c++;
                for(int j=i*2;j<n;j+=i){
                    p[j]=false;
                }
            }
        }
        return c;
    }
};