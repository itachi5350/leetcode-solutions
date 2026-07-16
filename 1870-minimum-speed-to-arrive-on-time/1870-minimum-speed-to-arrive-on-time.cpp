class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l=1,r=1e7+1;
        int res=-1;
        while(l<r){
            int mid=l+(r-l)/2;
            double hr=0.0;
            for(int i=0;i<dist.size()-1;i++){
                hr+=ceil((double)dist[i]/mid);
            }
            hr+=(double)dist[dist.size()-1]/mid;
            if(hr>hour) l=mid+1;
            else{
                res=mid;
                r=mid;
            }
            
        }
        return res;
    }
};