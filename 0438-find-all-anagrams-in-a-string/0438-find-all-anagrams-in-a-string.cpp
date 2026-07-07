class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        if(p.size()>s.size()) return res;
        vector<int>m(26,0);
        vector<int>n(26,0);
        for(int r=0; r<p.size();r++){
            m[p[r]-'a']++;
        }
        int l=0;
        for(int r=0; r<s.size();r++){
            n[s[r]-'a']++;
            if(r-l+1>p.size()){
                n[s[l]-'a']--;
                l++;
            }
            if(r-l+1==p.size()){
                if(issame(m,n)) res.push_back(l);
            }
        }
        return res;
    }
    bool issame(vector<int>& m, vector<int>& n){
        for(int i=0;i<26;i++){
            if(m[i]!=n[i]) return false;
        }
        return true;
    }
};