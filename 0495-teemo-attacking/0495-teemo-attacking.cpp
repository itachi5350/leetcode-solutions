class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int t=0;
        for(int i=0; i<timeSeries.size()-1;i++){
            t+=min(timeSeries[i+1]-timeSeries[i],duration);
        }
        if(timeSeries.size()>0)t+=duration;
        return t;
       
    }
};