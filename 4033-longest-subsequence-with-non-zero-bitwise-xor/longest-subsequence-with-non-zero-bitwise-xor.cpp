class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool nonzero=false;
        int xr=0;

         for(int x : nums){
            xr^=x;
            if(x != 0)
            nonzero=true;

         }

         if(xr != 0)
         return nums.size();

         if(nonzero)
         return nums.size()-1;

         return 0;
    }
};