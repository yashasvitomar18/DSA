class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int hash[256];
        fill(hash, hash + 256, -1);

        int left = 0;
        int r = 0;
        int n = s.length();

        while(r < n) {

            if(hash[s[r]] >= left) {
                left = hash[s[r]] + 1;
            }

            hash[s[r]] = r;

            int len = r - left + 1;
            maxlen = max(maxlen, len);

            r++;
        }

        return maxlen;
    }
};