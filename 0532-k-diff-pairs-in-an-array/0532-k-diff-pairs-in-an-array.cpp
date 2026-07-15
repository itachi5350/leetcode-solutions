class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        set<int>st;
        set<pair<int,int>>s;
        for(auto i : nums){
            if(st.count(i-k)) s.insert({i-k,i});
            if(st.count(i+k)) s.insert({i,i+k});
            st.insert(i);
        }
        return s.size();
    }
};