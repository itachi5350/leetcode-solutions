class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(), weights.end()),r=0,d,sum=0;
        r=accumulate(weights.begin(),weights.end(),0);
        while(l<=r){
            d=0;
            sum = 0;
            int mid=l+(r-l)/2;
            for(auto i : weights){
                sum+=i;
                if(sum>mid){
                    d++;
                    sum=i;
                }
            }
            if(sum<=mid)d++;
            // cout << "mid : " << mid << " d : " << d << endl; 
            if(d<=days) r=mid-1;
            else l=mid+1;
            // cout << " r : " << r << " l : " << l << endl;

        }
        return l;
    }
};