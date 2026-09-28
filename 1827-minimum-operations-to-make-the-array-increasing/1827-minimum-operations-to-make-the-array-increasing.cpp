class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c=0;
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