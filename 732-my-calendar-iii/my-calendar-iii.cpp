class MyCalendarThree {
public:
vector<int>ans;

map<int,int>map;

int maxcnt=0;

    MyCalendarThree() {
        
    }

    int book(int startTime, int endTime) {
        
        map[startTime]++;
        map[endTime]--;

        int cnt=0;
            for(auto x : map){
                cnt+=x.second;

                if(cnt > maxcnt)
                maxcnt=cnt;
            }
            ans.push_back(maxcnt);

            return maxcnt;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */