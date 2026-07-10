class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      vector<int>m(nums1.size(),-1);
      for(int i=0;i<nums1.size();i++){
        int p=-1;
        for(int j=0;j<nums2.size();j++){
            if(nums2[j]==nums1[i]){
                p=j;break;
            }
        }

        for(int j=p+1;j<nums2.size();j++){
            if(nums2[j]>nums1[i]){
                m[i]=nums2[j];break;
            }
        }
      }
        return m;
    }
};