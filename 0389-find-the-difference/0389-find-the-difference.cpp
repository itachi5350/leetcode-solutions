class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>v(26,0);
        vector<int>v1(26,0);
        for(char c: s) v[c-'a']++;
        for(char i : t){
           v1[i-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=v1[i]) return i+'a';
        }
        return '\0';
    }
};