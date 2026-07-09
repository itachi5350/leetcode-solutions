class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=0;
        for(auto i : piles){
            r=max(r,i);
        }
        long long hr;
        while(l<=r){
             hr = 0;
            int mid=l+(r-l)/2;

            for(auto i: piles){
                hr += i / mid;
                if(i % mid != 0) 
                    hr++;
            }
            if(hr<=h) {
                r = mid - 1;
            }
            else l=mid+1;
            // else r=mid-1;
        }
        return l;
    }
};