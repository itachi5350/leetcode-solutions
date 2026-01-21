class Solution {
public:
    bool isValid(string s) {
        std::stack<char> ss;
        for(auto i : s){
            if(i=='('|| i=='[' || i=='{')
                 ss.push(i);
            else{
                if(ss.empty()) return false;
                else if(i==')' && ss.top()=='(' || i==']' && ss.top()=='['|| i=='}' && ss.top()=='{') ss.pop();
                else return false;
            }
        }
        return (ss.empty())? true : false;
    }
};