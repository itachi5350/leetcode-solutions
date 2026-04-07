class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int atmostk= countersubarray(nums,k);
        int notatmostk=countersubarray(nums,k-1);
        return (atmostk-notatmostk);
    }
    int countersubarray(vector<int>& nums,int k){
        unordered_map<int,int>m;
        int l=0,r=0,res=0;
        while(r<nums.size()){
            m[nums[r]]++;
            while(m.size()>k){
                m[nums[l]]--;
                if(m[nums[l]]==0) m.erase(nums[l]);
                l++;
            }
            res+=r-l+1;
            r++;
        }
        return res;
    }
};