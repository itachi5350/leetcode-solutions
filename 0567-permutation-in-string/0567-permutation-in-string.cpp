class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        int l=0,r=0;
        vector<int>v(26,0);
        vector<int>v1(26,0);
        for(auto i: s1){
            v[i-'a']++;
        }
        while(r<n && l<=r){
            v1[s2[r++]-'a']++;
           while(r-l>m){
            v1[s2[l]-'a']--;
            l++;
           }
           if(r-l==m){
            int temp=0;
            for(int j=0;j<26;j++){
                if(v[j]!=v1[j]) {
                    temp=1;
                    break;
            }
           }
           if(temp==0) return true;
        }
    }
    return false;
    }
};