class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int count=0,l=0,r=0,p=1;
         if(k<=1) return 0;
         while(r<nums.size()){
             p*=nums[r];
            while(p>=k) p/=nums[l++];
            count+=1+(r-l);
            r++;
         }
         return count;
    }
};