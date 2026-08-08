class Solution {
public:
    int findGCD(vector<int>& nums) {
       int maxi=0, mini=1001;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi) maxi=nums[i];
        if(nums[i]<mini) mini=nums[i];
       }
       return gcd(maxi,mini);
    }
};