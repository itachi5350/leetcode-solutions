class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int,int>m;
       int s=0,len=0;
       for(int &i:nums){
        if(i==0) i=-1;
       }
       for(int i=0;i<nums.size();i++){
        s+=nums[i];
        if(s==0) len=max(len,i+1);
        if(m.find(s)!=m.end()){
            len=max(len,i-m[s]);
        }else{
             m[s]=i;
        }
       }
       return len;
    }
};