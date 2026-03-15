

      class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        
        int global_min = arrays[0][0];
        int global_max = arrays[0].back();
        int ans = 0;

        for(int i = 1; i < arrays.size(); i++) {
            
            int min_current = arrays[i][0];
            int max_current = arrays[i].back();

            ans = max(ans, abs(max_current - global_min));
            ans = max(ans, abs(global_max - min_current));

            global_min = min(global_min, min_current);
            global_max = max(global_max, max_current);
        }

        return ans;
    }
};  
 