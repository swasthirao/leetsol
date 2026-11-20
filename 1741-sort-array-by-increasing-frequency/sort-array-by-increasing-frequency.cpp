class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> mp;

        for(int x : nums)
            mp[x]++;

        vector<pair<int,int>> v;

        for(auto [num, freq] : mp) {
            v.push_back({num, freq});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {

            if(a.second == b.second)
                return a.first > b.first;

            return a.second < b.second;
        });

        vector<int> res;

        for(auto [num, freq] : v) {
            for(int i = 0; i < freq; i++) {
                res.push_back(num);
            }
        }

        return res;
    }
};