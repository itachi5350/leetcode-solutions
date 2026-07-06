class Solution {
public:
    vector<int> searchRange(vector<int>& v, int k) {
         int first=firstOccurrence(v,k);
        if(first==-1) return {-1,-1};
        int last=lastOccurrence(v,k);
        return {first,last};
    }
    int firstOccurrence(vector<int>& v, int k) {
    int l = 0, r = v.size() - 1;
    int ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (v[mid] == k) {
            ans = mid;
            r = mid - 1;
        }
        else if (v[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return ans;
}
int lastOccurrence(vector<int>& v, int k) {
    int l = 0, r = v.size() - 1;
    int ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (v[mid] == k) {
            ans = mid;
            l=mid+1;
        }
        else if (v[mid] < k)
            l = mid + 1;
        else
            r = mid-1;
    }

    return ans;
     }
};