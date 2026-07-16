class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(), weights.end());
       int high = accumulate(weights.begin(), weights.end(), 0);
       int ans = 0;
        while(low<=high){
            int capacity = (low+high)/2;
            int total_days = 1;
            int currentLoad = 0;

            for (int weight : weights) {
 
            if (currentLoad + weight <= capacity) {
            currentLoad += weight;
            }
            else {
            total_days++;
            currentLoad = weight;
        }
    }
        if(total_days<=days){
            ans = capacity;
            high = capacity - 1;
        }
            else low = capacity + 1;
        }
        return ans;
    }
};