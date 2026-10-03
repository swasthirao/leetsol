// class MyCalendar {
// public:
//     MyCalendar() {
        
//     }
    
//     bool book(int startTime, int endTime) {
        
//     }
// };

// /**
//  * Your MyCalendar object will be instantiated and called as such:
//  * MyCalendar* obj = new MyCalendar();
//  * bool param_1 = obj->book(startTime,endTime);
//  */
 class MyCalendar {
public:
    map<int,int>map;

    MyCalendar() {
       //initialises
    }
    
    bool book(int startTime, int endTime) {
      map[startTime]++;
      map[endTime]--;
        int cnt=0;
//int maxover=0;
       for(auto &x:map){
            cnt+=x.second;

            if(cnt >= 2){
               
                map[startTime]--;
      map[endTime]++;
      return false;

            }
       }
       return true;
    }
};
//to return peak time
//maxove=0;
//when new mwwting is added,cnt++;

//if(cnt > maxOver) maxover=cnt..and peaktime=x.first
/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */