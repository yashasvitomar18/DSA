class Solution {
public:
    bool matches(char top, char ch) {
        return (top == '(' && ch == ')') ||
               (top == '{' && ch == '}') ||
               (top == '[' && ch == ']');
    }

    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // Opening bracket -> push
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // Closing bracket
            else {
                // No opening bracket available
                if (st.empty()) {
                    return false;
                }

                char top = st.top();

                // Brackets don't match
                if (!matches(top, ch)) {
                    return false;
                }

                st.pop();
            }
        }

        // Stack should be empty
        return st.empty();
    }
};