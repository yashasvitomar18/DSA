class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;

        for (int i = 0; i < operations.size(); i++) {

            // Cancel last score
            if (operations[i] == "C") {
                st.pop();
            }

            // Double last score
            else if (operations[i] == "D") {
                st.push(st.top() * 2);
            }

            // Sum of previous two scores
            else if (operations[i] == "+") {
                int first = st.top();
                st.pop();

                int second = st.top();

                st.push(first);
                st.push(first + second);
            }

            // Number
            else {
                st.push(stoi(operations[i]));
            }
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};