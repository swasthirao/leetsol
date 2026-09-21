class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int,int>>starts;
        int n=intervals.size();
        for(int i=0 ; i<n ; i++){
            starts.push_back({intervals[i][0],i});

        }

        sort(starts.begin(),starts.end());

        vector<int>answer(n);

        for(int i=0 ; i<n ; i++){

            int end=intervals[i][1];

            auto it=lower_bound(starts.begin(),starts.end(),make_pair(end,-1));

            if(it == starts.end()){
                answer[i]=-1;
            }
            else{
                answer[i]=it->second;
            }

        }
        return answer;
    }
};