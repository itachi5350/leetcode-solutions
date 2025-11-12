class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       vector<int>v;
       unordered_map<int,int>m;
       int s=0,len=0;
       for(int i:nums){
        if(i==0) v.push_back(-1);
        if(i==1) v.push_back(i);
       }
       int n=v.size();
       for(int i=0;i<n;i++){
        s+=v[i];
        if(s==0) len=max(len,i+1);
        if(m.find(s)!=m.end()){
            int llen=i-m[s];
            len=max(len,llen);
        }
        if(m.find(s)==m.end()) m[s]=i;
       }
       return len;
    }
};