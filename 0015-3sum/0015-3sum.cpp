class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        int n=nums.size();
        for(int m=0;m<n;m++){
            if(m>0 && nums[m]==nums[m-1]) continue;
            int l=m+1;
            int r=n-1;
            while(l<r){
                if(nums[l]+nums[m]+nums[r]==0){
                    v.push_back({nums[l],nums[m],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1]) l++;
                    while(l<r && nums[r]==nums[r+1]) r--;
                }
                else if(nums[l]+nums[m]+nums[r]<0) l++;
                else r--;
            }
        }
        return v;
    }
};