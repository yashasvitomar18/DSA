class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int m = s1.length();
        int n = s2.length();

        if (m > n)
            return false;
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for (char c : s1) {
            mp1[c]++;
        }
        int l = 0;
        for (int r = 0; r < n; r++) {
            mp2[s2[r]]++;
            if (r - l + 1 > m) {
                mp2[s2[l]]--;

                if (mp2[s2[l]] == 0)
                    mp2.erase(s2[l]);

                l++;
            }
            if (r - l + 1 == m && mp1 == mp2)
                return true;
        }
        return false;
    }
};