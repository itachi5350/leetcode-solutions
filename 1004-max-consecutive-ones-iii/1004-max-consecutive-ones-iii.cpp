class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,mL=0,zc=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0) zc++;
            while(zc>k){
                if(nums[l]==0)zc--;
                l++;
            }
            mL=max(mL,r-l+1);
        }
        return mL;
    }
};