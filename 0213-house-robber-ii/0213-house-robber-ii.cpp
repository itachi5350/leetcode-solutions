class Solution {
public:
    int rob(vector<int>& nums) {
      int n=nums.size();
      if(n<2) return n?nums[0]:0;
      return max(robb(nums,0,n-2),robb(nums,1,n-1));
    }
    int robb(vector<int>& nums,int l,int r){
        int rob1=0,rob2=0;
        for(int i=l;i<=r;i++){
            int temp=max(nums[i]+rob1,rob2);
            rob1=rob2;
            rob2=temp;
        }
        return rob2;
    }
};