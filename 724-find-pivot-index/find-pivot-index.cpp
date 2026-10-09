class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int total = 0;

        // for (int x : nums)
        //     total += x;

        // int leftSum = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     int rightSum = total - leftSum - nums[i];

        //     if (leftSum == rightSum)
        //         return i;

        //     leftSum += nums[i];
        // }
        int left=0;
        int right=0;
        for(int x :nums){
            right+=x;
        }
        
        int n=nums.size();

        for(int i=0 ; i<n ; i++){
            right-=nums[i];

            if(left == right)
            return i;
            else
            left+=nums[i];
        }

        return -1;
    }
};