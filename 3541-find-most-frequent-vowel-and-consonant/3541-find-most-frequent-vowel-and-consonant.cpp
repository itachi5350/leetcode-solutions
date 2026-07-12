class Solution {
public:
    int maxFreqSum(string s) {
        int es=0,as=0,is=0,os=0,us=0,cs=0,vs=0;
        unordered_map<char,int>m;
        for(auto i : s){
            if(i=='a') as++;
            else if(i=='e') es++;
            else if(i=='i') is++;
            else if(i=='o') os++;
            else if(i=='u') us++;
            else {
                m[i]++;
                cs=max(cs,m[i]);
            }
            vs=max({vs,as,es,is,os,us});
        }
        return vs+cs;
    }
};