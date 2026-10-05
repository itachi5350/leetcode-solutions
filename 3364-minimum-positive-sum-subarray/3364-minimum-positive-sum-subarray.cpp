class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum=INT_MAX;
        int n=nums.size();
        vector<int>v(n+1,0);
        for(int i=0;i<n;i++){
            v[i+1]=v[i]+nums[i];
        }
        for(int k=l;k<=r;k++){
            for(int i=0;i+k<=n;i++){
                int s=v[i+k]-v[i];
                if(s>0) minsum=min(minsum,s);
            }
        }
        return minsum==INT_MAX?-1:minsum;
    }
};