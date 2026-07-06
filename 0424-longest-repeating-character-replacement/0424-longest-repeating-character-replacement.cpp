class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int>m;
        int l=0,res=INT_MIN,mf=INT_MIN;
        for(int r=0;r<s.size();r++){
            m[s[r]]++;
            mf=max(mf,m[s[r]]);
            while((r-l+1)-mf>k){
                m[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};