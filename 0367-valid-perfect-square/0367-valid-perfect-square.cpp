class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1) return true;
        int low = 0;
        int high =num;
        while(low<=high){
            long long mid = (low+ high)/2;

            if (mid * mid == num) return true;

            if(mid*mid>num){
                high = mid - 1;
            }
            else low = mid + 1;

        }
        return false;
    }
};