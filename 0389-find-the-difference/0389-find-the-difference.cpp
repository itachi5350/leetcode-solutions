class Solution {
public:
    char findTheDifference(string s, string t) {
      char d=0;
      for(auto c:s) d^=c;
      for(auto c:t) d^=c;
      return d;
    }
};