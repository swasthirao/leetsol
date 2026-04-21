class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        long long sum = 0;
        
        // first window to grt innn
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        long long maxsum = sum;
        
        
        for(int i = k; i < n; i++) {
            sum += nums[i];        // add new one...
            sum -= nums[i - k];    // remove old one...
            
            maxsum = max(maxsum, sum);
        }
        
        return (double)maxsum / k;
    }
};