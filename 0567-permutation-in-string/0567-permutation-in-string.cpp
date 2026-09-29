class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        vector<int>v(26,0);
         vector<int>w(26,0);
        for(auto c:s1){
            v[c-'a']++;
        }
        int l=0,r=0;
        while(r<n && l<=r){
            w[s2[r++]-'a']++;
            while(r-l>m){
                w[s2[l]-'a']--;
                l++;
            }
          if(r-l==m){
            int temp=0;
            for(int i=0;i<26;i++){
                if(v[i]!=w[i]) {
                    temp=1;break;
            }
           
          }
           if(temp==0) return true;
        }
    }
        return false;
    }
};