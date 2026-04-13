class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int c=0;
       sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i++){
          if(nums[i]<=nums[i-1]){
             int n=(nums[i-1]+1)-nums[i];
             c+=n;
             nums[i]+=n;
       }
       }
       return c;
    }
};