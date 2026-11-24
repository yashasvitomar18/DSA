
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int n = 1; n <= numRows; n++) {
            long long res = 1;
            vector<int> row;

            for(int i = 0; i < n; i++) {
                row.push_back(res);

                res = res * (n - 1 - i);
                res = res / (i + 1);
            }

            ans.push_back(row);
        }

        return ans;
    }
};
