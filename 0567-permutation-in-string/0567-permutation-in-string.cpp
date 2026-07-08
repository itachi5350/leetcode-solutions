class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq(26,0);
        for(int i=0;i<s1.size();i++) freq[s1[i]-'a']++;
        int l=0,c=s1.size();
        for(int r=0;r<s2.size();r++){
            if(freq[s2[r]-'a']>0) c--;
            freq[s2[r]-'a']--;
            while(r-l+1>s1.size()){
                if(freq[s2[l]-'a']>=0) c++;
                freq[s2[l]-'a']++;
                l++;
            }
            if(c==0) return true;
        }
        return false;
    }
};