class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0,l=0,r=0;
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
        if(len==INT_MAX) return 0;
        return len;

    }
};