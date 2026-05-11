class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi = 0;

        for(string s : sentences) {

            int spaces = 0;

            for(char ch : s) {

                if(ch == ' ')
                    spaces++;
            }

            maxi = max(maxi, spaces + 1);
        }

        return maxi;
    }
};