class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int r=-1,l=-1;
        int maxS=nums[0];
        int minS=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            maxS=max(maxS,nums[i]);
            if(nums[i]<maxS) r=i;
        }    
        for(int i=nums.size()-2;i>=0;i--){
            minS=min(minS,nums[i]);
            if(nums[i]>minS) l=i;
        } 
        if(r==-1) return 0;
        return r-l+1;
        
    }
};