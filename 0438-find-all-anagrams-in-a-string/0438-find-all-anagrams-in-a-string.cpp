class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int l = 0;
        int m = p.length();

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for (char c : p) {
            mp1[c]++;
        }

        for (int r = 0; r < s.length(); r++) {
            mp2[s[r]]++;

            if (r - l + 1 == m) {
                if (mp1 == mp2) {
                    ans.push_back(l);
                }

                mp2[s[l]]--;

                if (mp2[s[l]] == 0) {
                    mp2.erase(s[l]);
                }

                l++;
            }
        }

        return ans;
    }
};