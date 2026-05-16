class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>freq;

        for(auto arr : nums){
            for(int num : arr){
                freq[num]++;
            }
        }
        vector<int>ans;
            for(auto x : freq){
                if(x.second == nums.size()){
                    ans.push_back(x.first);
                    
                }
            }
            sort(ans.begin(),ans.end());
            return ans;
    }
};