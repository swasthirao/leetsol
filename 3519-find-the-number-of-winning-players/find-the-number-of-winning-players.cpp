class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        
        vector<vector<int>>freq(n,vector<int>(11,0));
        for(auto &p : pick){
           int player=p[0];
           int color=p[1];
           freq[player][color]++;
        }

      int ans=0;

        for(int plr=0 ; plr < n ; plr++){

            bool win = false;
            for(int clr=0 ; clr <= 10 ; clr++){

                if(freq[plr][clr] > plr){
                    win=true;
                    break;
                }

            }
            if(win)
            ans++;

        }

        return ans;

    }
};