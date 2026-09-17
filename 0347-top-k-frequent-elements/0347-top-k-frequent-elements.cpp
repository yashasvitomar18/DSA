class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>ans;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            ans.push_back({x.second, x.first});
        }
        sort(ans.begin(), ans.end(),greater<pair<int,int>>());
        vector<int> result;
        for(int i = 0; i < k; i++) {
            result.push_back(ans[i].second);
        }

        return result;
    }
};