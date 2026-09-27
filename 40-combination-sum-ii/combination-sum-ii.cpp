class Solution {
public:

    void f(int index,vector<int>&candidates,int target,vector<int>&ds,vector<vector<int>>&ans){

        if(target == 0){
      
        ans.push_back(ds);
        return;
        }
        if(index == candidates.size())
        return;

        if(candidates[index] <= target){
            ds.push_back(candidates[index]);

                f(index+1,candidates,target-candidates[index],ds,ans);

                ds.pop_back();
        }

//if [1 1 2 2]..inclused all duplicates
        //f(index+1,candidates,target,ds,ans);
        int next=index+1;

        while(next < candidates.size() && candidates[index] == candidates[next]){
            next++;
        }

        f(next,candidates,target,ds,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());

        vector<vector<int>>ans;
        vector<int>ds;

        f(0,candidates,target,ds,ans);

        sort(ans.begin(),ans.end());
        return ans;
    }
};