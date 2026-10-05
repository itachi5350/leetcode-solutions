class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,s=0;
        int len=INT_MAX;
        while(r<nums.size()){
            s+=nums[r];
            while(l<=r && s>=target){
                len=min(len,r-l+1);
                s-=nums[l];
                l++;
            }
            r++;
        }
        return len==INT_MAX?0:len;
    }
};