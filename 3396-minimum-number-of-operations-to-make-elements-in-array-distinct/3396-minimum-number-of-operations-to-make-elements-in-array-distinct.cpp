class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        int temp;
        while(true){
            unordered_map<int,int>mp;
            temp=0;
            for(int i:nums){
            if(++mp[i]==2) {
                temp++;
                break;
            }
        }
            if(temp==0) break;
            nums.erase(nums.begin(),nums.begin()+min(3,(int)nums.size()));
            c++;
        }
        return c;
    }
};