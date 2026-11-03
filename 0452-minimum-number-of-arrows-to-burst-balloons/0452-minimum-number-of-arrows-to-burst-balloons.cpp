class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();

        if(points.empty()) {
                return 0;
        }

        sort(points.begin(), points.end(),
        [](vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
        });
        
        int prevEnd = points[0][1];
        int cnt = 1;
        for(int i =1;i<n;i++){
            int start = points[i][0];
            int end = points[i][1];
            if(points[i][0] > prevEnd){
                cnt++;
                prevEnd = points[i][1];
            }
        }
        return cnt;
    }
};