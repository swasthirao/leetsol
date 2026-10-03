class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;

        int n=trips.size();

        for(int i=0 ; i<n ; i++){
            int psncnt=trips[i][0];
            int start=trips[i][1];
            int end=trips[i][2];

                mp[start]+=psncnt;
                mp[end]-=psncnt;

                int cnt=0;

                    for( auto &x : mp){

                        cnt+=x.second;

                            if(cnt > capacity){
                                return false;
                                break;
                            }
                    }
        }
        return true;
    }
};