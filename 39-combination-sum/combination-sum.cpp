class Solution {
public:

    void f(int index,int target,vector<int>&candidates,vector<int>&ds,vector<vector<int>>&ans){

        if(target == 0){

        ans.push_back(ds);
        return;

        }
        if(index == candidates.size())
        return;

        if(candidates[index] <= target){
            ds.push_back(candidates[index]);

            f(index,target-candidates[index],candidates,ds,ans);

            ds.pop_back();

        }

        f(index+1,target,candidates,ds,ans);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;

        f(0,target,candidates,ds,ans);

        return ans;
    }
};