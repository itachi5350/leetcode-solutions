class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int res=abs(nums[0]),maxs=nums[0],mins=nums[0];
       for(int i=1;i<nums.size();i++){
        maxs=max(maxs+nums[i],nums[i]);;
        mins=min(mins+nums[i],nums[i]);
        res=max(res,max(abs(maxs),abs(mins)));
       }
       return res;
   }
};