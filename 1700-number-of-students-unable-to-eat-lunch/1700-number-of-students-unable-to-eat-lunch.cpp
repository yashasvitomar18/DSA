class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        queue<int> q;
        stack<int> st;

        // Students → Queue
        for(int x : students) {
            q.push(x);
        }

        // Sandwiches → Stack
        // Reverse push because sandwiches[0] should be on top
        for(int i = sandwiches.size() - 1; i >= 0; i--) {
            st.push(sandwiches[i]);
        }

        int cnt = 0;

        while(!q.empty() && !st.empty()) {

            if(q.front() == st.top()) {

                // Student takes sandwich
                q.pop();
                st.pop();

                // New sandwich, so reset
                cnt = 0;
            }
            else {

                // Student goes to back of queue
                int student = q.front();
                q.pop();
                q.push(student);

                cnt++;

                // Everyone has refused current sandwich
                if(cnt == q.size()) {
                    break;
                }
            }
        }

        return q.size();
    }
};