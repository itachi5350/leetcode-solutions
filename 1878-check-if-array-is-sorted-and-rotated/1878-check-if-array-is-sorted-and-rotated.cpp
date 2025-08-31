class Solution {
public:
    bool check(vector<int>& nums) {
     int count=1;
     if (nums.size()==1) return true;
     for(int i=1;i<2*nums.size();i++){
         if(nums[(i-1)%nums.size()]<=nums[i%nums.size()]){
            count+=1;
         }else{
            count=1;
         }
          if(count==nums.size())return true;
     }
     return false;
    }
};