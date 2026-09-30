class Solution {
public:

    void quicksort(vector<int>& nums, int low, int high) {
        if (low >= high)
            return;

        // Random pivot
        int p = low + rand() % (high - low + 1);
        swap(nums[low], nums[p]);

        int pivot = nums[low];
        int i = low;
        int j = high;

        while (i < j) {

            while (i <= high && nums[i] <= pivot)
                i++;

            while (j > low && nums[j] >= pivot)
                j--;

            if (i < j)
                swap(nums[i], nums[j]);
        }

        swap(nums[low], nums[j]);

        quicksort(nums, low, j - 1);
        quicksort(nums, j + 1, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};