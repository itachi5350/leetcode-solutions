class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l=0,res=0,s=answerKey.size(),cnt=0;
        for(int r=0;r<s;r++){
           if(answerKey[r]=='F') cnt++;
           while(cnt>k){
            if(answerKey[l]=='F'){
                cnt--;
            }
            l++;
           }
        res=max(res,r-l+1);
        }
        l=0,cnt=0;
        for(int r=0;r<s;r++){
           if(answerKey[r]=='T') cnt++;
           while(cnt>k){
            if(answerKey[l]=='T'){
                cnt--;
            }
            l++;
           }
        res=max(res,r-l+1);
        }
       return res;
    }
};