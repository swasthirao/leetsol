class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        
        priority_queue<int,vector<int>,greater<int>>freeChairs;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>occupied;
        // 4 0
        // 3 1
        //

        int n = times.size();
        for(int i=0 ; i<n ; i++){
            times[i].push_back(i);//append person no
        }

        for(int i= 0 ; i<n ; i++){
            freeChairs.push(i);//freeChairs ka count
        }

        sort(times.begin(),times.end());
//start processing

        for(auto &person : times){
            int arrival=person[0];
            int leave=person[1];
            int index=person[2];


            while(! occupied.empty() && occupied.top().first <= arrival){

                int chair=occupied.top().second;
                freeChairs.push(chair);
                occupied.pop();

            }

        int chair=freeChairs.top();
        freeChairs.pop();

        if(index == targetFriend)
        return chair;

        occupied.push({leave,chair});

        }
        return -1;
    }
};