class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        bool hasS=false;
        bool hasT=false;
        for(char ch : s){
            if(ch=='1'){
                hasS=true;
            break;
            }
        }

            for(char c : target){
            if(c=='1'){
                hasT=true;
            break;
            }
        }
        return hasS == hasT;
    }
};