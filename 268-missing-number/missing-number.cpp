class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int Expsum=n*(n+1)/2;
        int Acsum = 0;

        for(int s : nums){
            Acsum += s;
        }

        return Expsum - Acsum;

    }
};