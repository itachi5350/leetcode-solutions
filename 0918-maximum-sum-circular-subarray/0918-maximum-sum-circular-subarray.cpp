class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int t=0,maxs=nums[0],cmax=0,mins=nums[0],cmin=0;
       for(int i : nums){
        cmax=max(cmax+i,i);
        maxs=max(maxs,cmax);
        cmin=min(cmin+i,i);
        mins=min(mins,cmin);
        t+=i;
       }
       return (maxs>0)?max(maxs,t-mins):maxs;
    }
};