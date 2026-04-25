class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0;
        int rig=0;
        int bla=0;
                for(char ch : moves){
                if(ch == 'L')
                left++;
                else if(ch == 'R')
                rig++;
                else
                bla++;
            }
        return abs(rig-left) + bla;
    }
};