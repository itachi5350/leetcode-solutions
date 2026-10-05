class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;
        for(int k=l;k<=r;k++){
            int s=0;
            for(int i=0;i<nums.size();i++){
                s+=nums[i];
                if(i>=k-1){
                if(s>0) minsum=min(minsum,s);
                s-=nums[i-k+1];
            }
        }
        }
        return minsum==INT_MAX?-1:minsum;
    }
};