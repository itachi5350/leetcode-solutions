class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>f(128,0);
        for(auto c: t){
            f[c]++;
        }
        int l=0,r=0,count=t.size();
        int str;
        int res=INT_MAX;
        while(r<s.size() && l<=r){
            if(f[s[r]]>0) count--;
            f[s[r]]--;
            r++;
             while(count ==0){
                if(r-l<res){
                    res=r-l;
                    str=l;
                }
                 f[s[l]]++;
                if(f[s[l]]>0) count++;
                l++;
                
            }  
        }
        return res==INT_MAX?"":s.substr(str,res);
    }
};