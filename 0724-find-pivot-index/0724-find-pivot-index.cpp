class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0,rsum=0,sum=0;
        for(int i: nums){
             sum+=i;
        }
        for(int i=0;i<nums.size();i++){
            rsum=sum-lsum-nums[i];
            if(rsum==lsum) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};