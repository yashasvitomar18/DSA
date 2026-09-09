class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int right=k-1;
        double sum = 0;

        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }

        double ans = sum/k;

        while(right<nums.size()-1){
            sum-=nums[left];
            left++;
            right++;
            sum+=nums[right];

            double avg =sum/k;
            ans = max(ans, avg);
        }
        return ans;
    }
};