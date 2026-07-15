class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       unordered_map<int,int>m;
       int res=0;
       for(auto i : nums) m[i]++;
       if(k==0){
        for(auto& i : m){
            if(i.second>1)res++;
        }
       }
        else if(k>0){
            for(auto& i : m)
                if(m.find(i.first+k)!=m.end())res++;
        }
        else return 0;
       return res;

    }
};