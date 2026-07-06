class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        unordered_map<int,int>f;
        int l=0,res=0,mf=0;
        for(int r=0;r<answerKey.size();r++){
            f[answerKey[r]]++;
            mf=max(mf,f[answerKey[r]]);
            while((r-l+1)-mf>k){
                f[answerKey[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};