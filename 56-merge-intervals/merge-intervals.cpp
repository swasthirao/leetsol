class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end());
        int st=intervals[0][0];
        int end=intervals[0][1];

        vector<vector<int>>ans;
        int n=intervals.size();
        for(int i=0 ; i<n ; i++){

            if(intervals[i][0] <= end){
                st=min(st,intervals[i][0]);
                end=max(end,intervals[i][1]);
            }

            else{
                ans.push_back({st,end});

                st=intervals[i][0];
                end=intervals[i][1];
            }

            
        }
        ans.push_back({st,end});
        return ans;
    }
};