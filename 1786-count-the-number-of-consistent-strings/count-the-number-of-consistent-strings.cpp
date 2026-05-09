class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        //bool yes=true;

    int count = 0;
        for(string w : words){
            bool yes=true;

                //int count = 0;

                for(char c : w){

                    if(allowed.find(c) == string::npos){
                    yes=false;
                    break;
                    }

                }
                if(yes)
                count++;

        }
        return count;
    }
};