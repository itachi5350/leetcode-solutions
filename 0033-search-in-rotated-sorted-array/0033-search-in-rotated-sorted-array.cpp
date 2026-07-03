class Solution {
public:
    int search(vector<int>& nums, int target) {
        int maxele=INT_MIN,k;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>maxele){
            maxele=nums[i];
            k=i;
        }
       }
       int l=0,r=k;
       while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target) return mid;
        else if (nums[mid]>target) r=mid-1;
        else l=mid+1;
       }
       l=k+1,r=nums.size()-1;
       while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target) return mid;
        else if (nums[mid]>target) r=mid-1;
        else l=mid+1;
       }
       return -1;

    }
};
