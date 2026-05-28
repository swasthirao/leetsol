class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        vector<bool>visited(n,false);

        int maxc=0;
         
    int cnt;
        for(int i = 0 ; i < n ; i++){
            int k = i;
         cnt=0;

            if(visited[k])
            continue;

            while(!visited[k]){

                visited[k]=true;
                k=nums[k];
                cnt++;

            }
            maxc=max(maxc,cnt);
        }

        return maxc;

    }
};