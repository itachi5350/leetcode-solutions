class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        int c=0;
        for(int i=0;i<s.length();i++){
           mp[s[i]]=i;
        }
        for(int i=0;i<t.size();i++){
           mp1[t[i]]=i;
        }
        for(int i=0;i<s.length();i++){
            c+=abs(mp[s[i]]-mp1[s[i]]);
        }
        return c;
    }
};