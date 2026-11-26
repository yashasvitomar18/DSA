class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;

        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }

        int ans = 0;
        bool odd = false;

        for(auto it : mp) {
            ans += (it.second / 2) * 2;

            if(it.second % 2 == 1) {
                odd = true;
            }
        }

        if(odd) {
            ans++;
        }

        return ans;
    }
};