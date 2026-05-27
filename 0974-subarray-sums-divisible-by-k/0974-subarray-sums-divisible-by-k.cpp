class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int psum=0,count=0;
       unordered_map<int,int>m;
       m[0]=1;
       for(int i:nums){
        psum+=i;
        int rem=psum%k;
        if(rem<0) rem+=k;
        if(m.find(rem)!=m.end()){
            count+=m[rem];
            m[rem]+=1;
        }
        else{
             m[rem]=1;
        }
       }
        return count;
    }
};