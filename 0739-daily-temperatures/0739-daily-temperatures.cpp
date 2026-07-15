class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>m(temperatures.size());
        stack<int>st;
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                m[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return m;
    }
};