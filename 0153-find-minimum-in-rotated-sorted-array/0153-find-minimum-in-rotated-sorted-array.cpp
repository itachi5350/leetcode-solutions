class Solution {
public:
    int findMin(vector<int>& nums) {
       int maxele=INT_MIN, k=-1;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>maxele){
            maxele=nums[i];
            k=i;
        }
       }
       return nums[(k+1)%nums.size()]; 
    }
};