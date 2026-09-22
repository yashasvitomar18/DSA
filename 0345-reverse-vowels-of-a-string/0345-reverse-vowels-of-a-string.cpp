class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;
        string vowels = "aeiouAEIOU";

        while(left < right) {

            if(vowels.find(s[left]) == string::npos)
                left++;

            else if(vowels.find(s[right]) == string::npos)
                right--;

            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};