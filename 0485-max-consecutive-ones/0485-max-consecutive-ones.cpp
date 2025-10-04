class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, m=INT_MIN;
        for(int i: nums){
            if(i==1){
                 c++;
            m=max(m,c);
            }
            else{ 
                c=0;
            }
        }
        if(m>0) return m;
        else return 0;
    }
};