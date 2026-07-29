class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;

        while (low < high) {

            // Skip non-alphanumeric characters from left
            while (low < high && !isalnum(s[low])) {
                low++;
            }

            // Skip non-alphanumeric characters from right
            while (low < high && !isalnum(s[high])) {
                high--;
            }

            // Compare after converting to lowercase
            if (tolower(s[low]) != tolower(s[high])) {
                return false;
            }

            low++;
            high--;
        }

        return true;
    }
};