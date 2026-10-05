class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;
        vector<int>v(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            v[i+1]=v[i]+nums[i];
        }
        for(int k=l;k<=r;k++){
            for(int i=0;i+k<=nums.size();i++){
                int s=v[i+k]-v[i];
                if(s>0) minsum=min(minsum,s);
            }
        }
        return minsum==INT_MAX?-1:minsum;
    }
};