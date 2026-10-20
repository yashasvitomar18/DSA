class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int leftSum=0;
        int totalSum =0;
        for(int i=0;i<n;i++){
            totalSum = totalSum +nums[i];
        }
        for(int i=0;i<n;i++){
            int rightSum = totalSum - leftSum -nums[i];
            
            if(leftSum==rightSum){
                return i;
            }
            else{
                leftSum +=nums[i];
            }
        }
        return -1;
    }
};