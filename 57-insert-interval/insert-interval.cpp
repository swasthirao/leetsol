class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       int i = 0;
       int n = intervals.size() ;
        
          vector<vector<int>> res;
//moving to desired link
            while(i < n && intervals[i][1] < newInterval[0]){
                res.push_back(intervals[i]);
                i++;
            }
//merging
            while(i < n && intervals[i][0] <= newInterval[1]){
                newInterval[0]=min(intervals[i][0],newInterval[0]);
                 newInterval[1]=max(intervals[i][1],newInterval[1]);
                 i++;
            }
            res.push_back(newInterval);

            //mending the remaining list..

                 while(i < n ){
                res.push_back(intervals[i]);
                i++;
            }
            return res;

    }
};