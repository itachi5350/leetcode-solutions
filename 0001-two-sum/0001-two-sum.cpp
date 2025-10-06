class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int>m;
       for(int i=0;i<nums.size();i++){
         int s=target-nums[i];
         if(m.find(s)!=m.end()) return {m[s],i};
         m[nums[i]]=i;
       }
       return {};
        
       
       
    }
};