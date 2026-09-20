class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (p.length() > s.length())
            return ans;

        unordered_map<char, int> pmap;
        unordered_map<char, int> smap;

        // Frequency of p
        for (char ch : p) {
            pmap[ch]++;
        }

        int left = 0;

        for (int right = 0; right < s.length(); right++) {

            // Add current character
            smap[s[right]]++;

            // Window size p se bada ho gaya
            if (right - left + 1 > p.length()) {
                smap[s[left]]--;

                if (smap[s[left]] == 0)
                    smap.erase(s[left]);

                left++;
            }

            // Same frequency => anagram
            if (right - left + 1 == p.length()) {
                if (smap == pmap) {
                    ans.push_back(left);
                }
            }
        }

        return ans;
    }
};