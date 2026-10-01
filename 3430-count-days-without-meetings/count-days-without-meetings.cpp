class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {

        sort(meetings.begin(),meetings.end());

        int freeslots=0;
        int n=meetings.size();

        int start=meetings[0][0];
        int firststart=start;
        int end=meetings[0][1];

        for(int i=1 ; i<n ; i++){
                //merging condition,merge intervals logic
                if(meetings[i][0] <= end+1){
                    end=max(end,meetings[i][1]);

                }
                else{
                     freeslots+=meetings[i][0]-end-1;

                     start=meetings[i][0];
                     end=meetings[i][1];
                }

        }

       

        freeslots+=firststart-1;
        freeslots+=days-end;
          return freeslots;
    }
};