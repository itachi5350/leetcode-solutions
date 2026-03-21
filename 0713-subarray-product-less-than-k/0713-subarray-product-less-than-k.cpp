class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int count=0;
        long long p;
         for(int i=0;i<nums.size();i++){
            p=1;
            for(int j=i;j<nums.size();j++){
                p*=nums[j];
                if(p>=k) break;
                count++;
            }
         }
         return count;
    }
};