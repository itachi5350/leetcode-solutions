class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    set<char>ss;
    int res=0,l=0;
    for(int r=0;r<s.length();r++){
        while(ss.count(s[r])){
            ss.erase(s[l]);
            l+=1;
        }
        ss.insert(s[r]);
        res=max(res,r-l+1);
    }
    return res; 
    }
};