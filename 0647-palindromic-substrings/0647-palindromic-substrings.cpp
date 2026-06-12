class Solution {
public:
    int countSubstrings(string s) {
        int count =0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                string q=s.substr(i,j-i+1);
                string p=q;
                reverse(p.begin(),p.end());
                if(p==q) count+=1;
            }
        }
        return count;
    }
};