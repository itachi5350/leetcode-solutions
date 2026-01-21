class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.length()-1;i>=0;i--){
            if(isalpha(s[i])){
               int j=i;
                while(j>=0 && s[j]!=' '){
                    count++;
                    j--;
                }
                break;
            }
        }
        return count;
    }
};