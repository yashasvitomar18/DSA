
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;

        for(int i = 0; i < cardPoints.size(); i++) {
            sum += cardPoints[i];
        }

        int windowsize = cardPoints.size() - k;
        int windowSum = 0;

        for(int i = 0; i < windowsize; i++) {
            windowSum += cardPoints[i];
        }

        int minSum = windowSum;

        for(int i = windowsize; i < cardPoints.size(); i++) {
            windowSum = windowSum - cardPoints[i - windowsize]+ cardPoints[i];

            minSum = min(minSum, windowSum);
        }

        return sum - minSum;
    }
};
