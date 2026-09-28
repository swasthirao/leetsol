class Solution {
public:
  void f(int index,vector<int>&nums, vector<int>&ds,vector<vector<int>>&ans){

        if(index == nums.size()){
            ans.push_back(ds);
            return;
        }

        ds.push_back(nums[index]);

        f(index+1,nums,ds,ans);
        ds.pop_back();

        int next=index+1;
        while(next < nums.size() && nums[index] == nums[next]){
            next++;
        }
        f(next,nums,ds,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<int>ds;
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        f(0,nums,ds,ans);
        return ans;
    }
};