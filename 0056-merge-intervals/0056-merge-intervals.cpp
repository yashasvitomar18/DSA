class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;

        for(int i =0;i<n;i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(result.empty()){
                result.push_back(intervals[i]);
            }
            else if(start<=result.back()[1]){
                result.back()[1] = max(result.back()[1],end);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};