class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int prefixSum=0;
        int cnt=0;

        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int r = prefixSum%k;

            if(r<0){
                r +=k;
            }
            cnt += mp[r];
            mp[r]++;
        }
        return cnt;
    }
};