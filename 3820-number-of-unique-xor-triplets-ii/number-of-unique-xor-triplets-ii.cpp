/*class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
     set<int>pairs;
     set<int>ans;
     int n =nums.size();
      pairs.insert(0);

        for(int i=0 ; i<n ; i++){

            for(int j=i+1 ; j<n ; j++){
                  
                  pairs.insert(nums[i] ^ nums[j]);

            }
        }

        for(int x:pairs){
            for(int n : nums){
                ans.insert(x ^ n);
            }
        }
        return ans.size();
   
    }
};*/
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAX = 2048;

        bool present[MAX] = {};
        bool pairs[MAX] = {};
        bool ans[MAX] = {};

        // Store unique values
        for (int x : nums) {
            present[x] = true;
        }

        // x ^ x = 0
        pairs[0] = true;

        // Generate unique pair XORs
        for (int a = 0; a < MAX; a++) {
            if (!present[a]) continue;

            for (int b = a + 1; b < MAX; b++) {
                if (!present[b]) continue;

                pairs[a ^ b] = true;
            }
        }

        // Pair XOR ^ third number
        for (int p = 0; p < MAX; p++) {
            if (!pairs[p]) continue;

            for (int x = 0; x < MAX; x++) {
                if (!present[x]) continue;

                ans[p ^ x] = true;
            }
        }

        // Count unique results
        int count = 0;

        for (int i = 0; i < MAX; i++) {
            if (ans[i]) count++;
        }

        return count;
    }
};