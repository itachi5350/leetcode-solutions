class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a1;
        vector<int>a2;
        vector<int>res;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
                if(a1.back()>a2.back()) a1.push_back(nums[i]);
                else a2.push_back(nums[i]);
            }
        for(auto i : a1) res.push_back(i);
        for(auto i : a2) res.push_back(i);
        return res;
    }
};