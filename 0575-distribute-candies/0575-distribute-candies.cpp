class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int d=n/2;
        set<int>s;
        for(int i=0;i<n;i++){
            if(s.size()<d) s.insert(candyType[i]);
        }
        return s.size();
    }
};