class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>f(26,0);
        vector<int>f1(26,0);
        vector<int>f2;
        int l=0;
        for(auto i: p){
            f[i-'a']++;
        }
        int r=0;
        while(r<s.size() && l<=r){
            f1[s[r++]-'a']++;
            if(r-l>p.size()){
                f1[s[l]-'a']--;
                l++;
            }
            if(r-l==p.size()){
                int temp=0;
                for(int i=0;i<26;i++){
                    if(f[i]!=f1[i]){
                        temp=1;
                        break;
                    }
                }
                  if(temp==0)f2.push_back(l);
            }
        }
        return f2 ;
    }
};