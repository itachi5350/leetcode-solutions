class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0, c=0;
       unordered_map<int,int>m;
       m[0]=1;
       for(int i=0;i<n;i++){
        s+=nums[i];
        int r=s-k;
        if(m.find(r)!=m.end()) c+=m[r];
        m[s]++;
       }
       return c;
    }
};