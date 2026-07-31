class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        int cnt = 0;

        // Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            cnt++;
            i--;
        }

        return cnt;
    }
};