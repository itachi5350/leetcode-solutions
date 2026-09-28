class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
      int c=0;
      sort(nums.begin(),nums.end());
      for(int i=1;i<nums.size();i++){
        if(nums[i]<=nums[i-1]){
            int in=nums[i-1]+1;
            c+=in-nums[i];
            nums[i]=in;
        }
      }
      return c;
    }
};