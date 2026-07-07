class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
           vector<int>freq(26,0);
        vector<int>f;
        int l=0;
        for(int i=0;i<p.size();i++){
            freq[p[i]-'a']++;
        }
        int count = p.size();
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']>0){
                count--;
            }
            freq[s[i]-'a']--;
            while(i-l+1  > p.size()){
                if(freq[s[l]-'a']>=0)count++;
                freq[s[l]-'a']++;
                l++;
            }
            if(count==0)f.push_back(l);
      
        }
        return f ;
    }
};