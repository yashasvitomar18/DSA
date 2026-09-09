class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left=0;
        int right=0;
        int sum=0;
        int minlen = INT_MAX;

       while(right<n){
        sum+=nums[right];
        while(sum>=target){
            right - left + 1;
            sum-=nums[left];
            minlen = min(minlen,right-left+1);
             left++;
            }
        right++;
    }

        if(minlen == INT_MAX)
            return 0;

        return minlen;
    }
};