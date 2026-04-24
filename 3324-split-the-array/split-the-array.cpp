class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> frequen;

        for (int num : nums) {
            frequen[num]++;
            if (frequen[num] > 2)
                return false;
        }

        return true;
    }
};