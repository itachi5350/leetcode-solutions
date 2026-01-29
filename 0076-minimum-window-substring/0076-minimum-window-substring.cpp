class Solution {
public:
    string minWindow(string s, string t) {
       int m=s.size();
        if(s.empty()||t.empty()||s.size()<t.size()) return "";
        vector<int>mm(128,0);
        int c=t.size(),l=0,r=0,minlen=INT_MAX,stin=0;
        for(char c: t) mm[c]++;
        while(r<m){
            if(mm[s[r++]]-->0) c--;
            while(c==0){
                if(r-l<minlen){
                    stin=l;
                    minlen=r-l;
                }
                if(mm[s[l++]]++==0)c++;
            }
        }
        return minlen==INT_MAX?"":s.substr(stin,minlen);
    }
};