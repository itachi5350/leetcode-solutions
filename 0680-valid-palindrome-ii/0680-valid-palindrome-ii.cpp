class Solution {
public:
    bool validPalindrome(string s) {
      int l=0,r=s.size()-1;
      while(l<r){
        if(s[l]!=s[r]){
            return ispd(s,l+1,r)||ispd(s,l,r-1);
        }
        l++;r--;
      }
      return true;
    }
    bool ispd(const string &s, int l, int r){
        while(l<r){
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
};