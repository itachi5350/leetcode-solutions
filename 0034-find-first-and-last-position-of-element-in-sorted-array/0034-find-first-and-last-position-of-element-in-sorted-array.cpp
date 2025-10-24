class Solution {
public:
    vector<int> searchRange(vector<int>& v, int k) {
        int low=0,high=v.size()-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(v[mid]>k) high=mid-1;
            else if(v[mid]<k) low=mid+1;
            else break;
        }
        if(mid>=v.size()|| v[mid]!=k) return {-1,-1};
        low=high=mid;
        while(high<v.size() && v[high]==k) high++;
        while(low>=0 && v[low]==k) low--;
        return{low+1,high-1};

    }
};