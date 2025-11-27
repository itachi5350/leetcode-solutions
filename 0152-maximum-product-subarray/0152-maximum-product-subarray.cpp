class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
        int cmax = 1, cmin = 1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0) {
                res = max(res, 0);
                cmax = 1;
                cmin = 1;
                continue;
            }

            int oldMax = cmax;
            int oldMin = cmin;

            cmax = max({nums[i], oldMax * nums[i], oldMin * nums[i]});
            cmin = min({nums[i], oldMax * nums[i], oldMin * nums[i]});

            res = max(res, cmax);
        }

        return res;
    }
};
