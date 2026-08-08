class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxstr=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(i!=j){
                    long long g=gcd(nums[i],nums[j]);
                    maxstr=max(maxstr,(1LL*nums[i]*nums[j])/(g*g));
                }
            }
        }
        return maxstr;
    }
};