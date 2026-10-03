class Solution {
public:
    int qs(vector<int>& nums, int low, int high) {
        int p = low + rand() % (high - low + 1);
        swap(nums[low], nums[p]);

        int pivot = nums[low];
        int i = low;
        int j = high;

        while(i < j) {
            while(i <= high && nums[i] <= pivot)
                i++;

            while(j > low && nums[j] >= pivot)
                j--;

            if(i < j)
                swap(nums[i], nums[j]);
        }

        swap(nums[low], nums[j]);
        return j;
    }

    int findKthLargest(vector<int>& nums, int k) {
        int target = nums.size() - k;
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high) {
            int p = qs(nums, low, high);

            if(p == target)
                return nums[p];
            else if(p > target)
                high = p - 1;
            else
                low = p + 1;
        }

        return -1;
    }
};