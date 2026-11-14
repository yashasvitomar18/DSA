class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int left = 0;
        int right = 0;
        int n = g.size();
        int m = s.size();

        while (left < m && right < n){
            if(g[right]<=s[left]){
                right++;
            }
            left++;
        }
    return right;
    }
};