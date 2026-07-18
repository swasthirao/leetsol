class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        return gcd(mini, maxi);
    }
};//mini = min(mini,x)
//max=max(maxi,x)
//ret gcd..