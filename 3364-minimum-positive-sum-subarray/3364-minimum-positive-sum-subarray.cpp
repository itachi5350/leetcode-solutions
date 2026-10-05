class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int s=0;
            for(int j=i;j<nums.size() && j<i+r; j++){
                s+=nums[j];
                int len=j-i+1;
                if(len>=l && len<=r && s>0) minsum=min(minsum,s);
            }
        }
        return minsum==INT_MAX?-1:minsum;
    }
};