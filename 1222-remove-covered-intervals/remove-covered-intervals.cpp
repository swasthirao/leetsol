class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            if (a[0] == b[0])
                return a[1] > b[1];

            return a[0] < b[0];
        });

        int maxEnd = 0;
        int count = 0;

        for (auto &x : intervals) {

            int start = x[0];
            int end = x[1];

            if (end > maxEnd) {
                count++;
                maxEnd = end;
            }
        }

        return count;
    }
};