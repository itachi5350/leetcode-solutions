class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int>v(128,0);
    int res=0,l=0;
    for(int r=0;r<s.length();r++){
       while(v[s[r]]>0){
        v[s[l]]--;
        l++;
       }
       v[s[r]]++;
       res=max(res,r-l+1);
    }
    return res; 
    }
};