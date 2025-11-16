class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b){ 
        return a[0]<b[0];
        });
        vector<vector<int>>merged;
        vector<int>p=intervals[0];
        for(int i=1;i<intervals.size();i++){
            vector<int> interval=intervals[i];
            if(interval[0]<=p[1]){ 
                p[1]=max(p[1],interval[1]);
            }else {merged.push_back(p);
            p=interval;
            }
        }
        merged.push_back(p);
        return merged;
    }
};