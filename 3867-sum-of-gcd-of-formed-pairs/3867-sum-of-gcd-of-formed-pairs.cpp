class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixii;
        int mx=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
             mx=max(mx,nums[i]);
             prefixii.push_back(gcd(nums[i],mx));
        }
        sort(prefixii.begin(),prefixii.end());
        int l=0,r=prefixii.size()-1;
        while(l<r){
            sum+=gcd(prefixii[l],prefixii[r]);
            l++;
            r--;
        }
        return sum;
    }
};