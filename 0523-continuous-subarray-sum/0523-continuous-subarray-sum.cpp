class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(k == 0) {
         for(int i = 1; i < nums.size(); i++) {
         if(nums[i] == 0 && nums[i-1] == 0) return true;
        }
          return false;
       }
        vector<int>v(nums.size(),0);
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            v[i]=v[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int j=0;j<v.size();j++){
            int rem=v[j]%k;
            if(mp.find(rem)!=mp.end()){
            if(j-mp[rem]>=2) return true;
            }
           else{
             mp[rem]=j;
           }
        }
        return false;
    }
};