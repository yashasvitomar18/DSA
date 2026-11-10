class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        stack<int> st;
        int temp = x;

        while(temp > 0) {
            st.push(temp % 10);
            temp /= 10;
        }

        while(x > 0) {
            if(x % 10 != st.top())
                return false;

            x /= 10;
            st.pop();
        }

        return true;
    }
};