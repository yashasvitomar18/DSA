class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
            vector<vector<int>> result;
            int newStart = newInterval[0];
            int newEnd = newInterval[1];

            int i = 0;

            for (; i < intervals.size(); i++) {
                   int start = intervals[i][0];
                   int end = intervals[i][1];

                   if (end < newStart) {
                       result.push_back(intervals[i]);
                   }
                   else if (start <= newEnd) {
                       newStart = min(newStart, start);
                       newEnd = max(newEnd, end);
                   }
                   else {
                       result.push_back({newStart, newEnd});
                       break;
                   }
               }

               for (int j = i; j < intervals.size(); j++) {
                   result.push_back(intervals[j]);
               }

               if (i == intervals.size()) {
                   result.push_back({newStart, newEnd});
               }

               return result;
    }
};