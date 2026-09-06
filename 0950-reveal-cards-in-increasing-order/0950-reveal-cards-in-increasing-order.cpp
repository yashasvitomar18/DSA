class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());

        queue<int> q;

        // Positions ko queue mein rakho
        for(int i = 0; i < deck.size(); i++) {
            q.push(i);
        }

        vector<int> ans(deck.size());

        for(int card : deck) {
            // Current position
            int pos = q.front();
            q.pop();

            ans[pos] = card;

            // Next position ko bottom mein bhejo
            if(!q.empty()) {
                int next = q.front();
                q.pop();
                q.push(next);
            }
        }

        return ans;
    }
};