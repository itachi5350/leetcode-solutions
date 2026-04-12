class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        long long sum=0;
        long long ad=0;
        int l=0,r=0;
        while(r<nums.size()){
            sum+=nums[r];
            m[nums[r]]++;
            if(r-l+1>k){
                sum-=nums[l];
                 m[nums[l]]--;
                if(m[nums[l]]==0) m.erase(nums[l]);
                l++;
            }
            if(r-l+1==k && m.size()==k) ad=max(ad,sum);
            r++;
        }
        return ad;
    }
};