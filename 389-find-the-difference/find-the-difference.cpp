class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
//easypeesylemonsqueesyy!!!
        for(char ch : s) ans ^= ch;
        for(char ch : t) ans ^= ch;

            return ans;
    }
};


