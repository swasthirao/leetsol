class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {

     priority_queue<int,vector<int>,greater<int>>freeRooms;

     priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>busyRooms;


     for(int i=0 ; i<n ; i++){
        freeRooms.push(i);
     }
     
     sort(meetings.begin(),meetings.end());

    vector<int>count(n,0);

    for(auto &meeting : meetings){

        long long start=meeting[0];
        long long end=meeting[1];

        while(!busyRooms.empty() && busyRooms.top().first <= start){
            int room=busyRooms.top().second;
            freeRooms.push(room);
            busyRooms.pop();
        }

        if(!freeRooms.empty()){
            int room=freeRooms.top();
            freeRooms.pop();

            busyRooms.push({end,room});
            count[room]++;
        }
        else{
            auto [maxtime , room]=busyRooms.top();
            busyRooms.pop();

            long long newtime=end-start;

            long long newend=maxtime+newtime;

            busyRooms.push({newend,room});
            count[room]++;
         
        }

    }

    int ans=0;

    for(int i=1 ; i<n ; i++ ){
        if(count[i] > count[ans])
        ans=i;
    }
    return ans;

    }
};