class Solution {
public:
    vector<int> searchRange(vector<int>& v, int k) {
        int l=-1,r=-1;
       for(int i=0;i<v.size();i++){
        if(v[i]==k) {
            l=i;
            int j=i;
        while(j<v.size() && v[j]==k){
              r=j;
              j++;
        }
        break;
        }
       }
       return {l,r};
    }
};