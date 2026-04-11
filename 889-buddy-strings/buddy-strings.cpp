class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;

        //ifffff equal
        if (s == goal) {
            vector<int> freq(26, 0);

            for (char ch : s) {
                freq[ch -'a']++;
                if (freq[ch -'a'] > 1)
                    return true;   // duplicate found in string...
            }

            return false;
        }

        // case 2: strings different,one place swappp
        vector<int> diff;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i])
                diff.push_back(i);
        }

        return diff.size() == 2 &&//2 mismatched places..
               s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];
    }
};