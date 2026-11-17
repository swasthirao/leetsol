class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> freq;

        // Count frequency
        for(char ch : s) {
            freq[ch]++;
        }

        // Store characters in a vector
        vector<pair<char, int>> v;

        for(auto it : freq) {
            v.push_back({it.first, it.second});
        }

        // Sort based on frequency
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        string ans = "";

        // Build answer
        for(auto it : v) {
            ans += string(it.second, it.first);
        }

        return ans;
    }
};