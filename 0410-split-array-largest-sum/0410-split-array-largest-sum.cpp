class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
      int l=0,r=0,res=0;
      for(auto i : nums){
        l=max(l,i);
        r+=i;
      } 
      while(l<=r){
        int mid=l+(r-l)/2;
        if(soll(nums,mid,k)){
            res=mid;
            r=mid-1;
        }else l=mid+1;
      }
      return res;
    }
    int soll(vector<int>& nums, int mid, int k){
        int s=0,c=1;
        for(auto i : nums){
            if(s+i>mid){
                c++;
                s=i;
            }else s+=i;
        }
        return c<=k;
    }
};