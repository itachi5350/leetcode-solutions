class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int p1=0,p2=0;
        for(int i:nums){
            int t=p1;
            p1=max(p1,i+p2);
            p2=t;
        }
        return p1;
    }
};