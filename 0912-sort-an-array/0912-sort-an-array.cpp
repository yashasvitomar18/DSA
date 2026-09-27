class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;

        int i = low;
        int j = mid + 1;

        // Compare both sorted halves
        while(i <= mid && j <= high) {

            if(nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // Left half ke remaining elements
        while(i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // Right half ke remaining elements
        while(j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        // temp ko nums mein copy karo
        for(int k = low; k <= high; k++) {
            nums[k] = temp[k - low];
        }
    }


    void mergeSort(vector<int>& nums, int low, int high) {

        if(low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(nums, low, mid);

        mergeSort(nums, mid + 1, high);

        merge(nums, low, mid, high);
    }


    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};