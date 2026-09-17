class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        int cnt=0;

        for(char x : stones){
            mp[x]++;
        }

        for(char x:jewels){
            cnt += mp[x];
        }
        return cnt;
    }
};