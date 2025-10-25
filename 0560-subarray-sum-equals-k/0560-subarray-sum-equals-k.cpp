class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0, c=0;
       unordered_map<int,int>m;
       m[0]=1;
       for(int i : nums){
        s+=i;
        if(m.find(s-k)!=m.end()) c+=m[s-k];
        m[s]++;
       }
       return c;
    }
};