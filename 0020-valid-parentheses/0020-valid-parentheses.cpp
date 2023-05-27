class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i = 0; i < size(s); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else if(s[i] == ')') {
                if(st.empty() || st.top() != '(') {
                    return false;
                }
                st.pop();
            } else if(s[i] == '}') {
                if(st.empty() || st.top() != '{') {
                    return false;
                }
                st.pop();
            } else {
                if(st.empty() || st.top() != '[') {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};