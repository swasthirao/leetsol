class Solution {
public:
    void f(int index,int k,int target,vector<int>&ds,vector<vector<int>>&ans){

        if(k == 0){
            if(target == 0){
                ans.push_back(ds);
                return;
            }
        }
        if(index > 9)
        return;

            if(index <= target){
                ds.push_back(index);
                    f(index+1,k-1,target-index,ds,ans);

                    ds.pop_back();
            }
            
            f(index+1,k,target,ds,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {

             vector<int>ds;
             vector<vector<int>>ans;

             f(1,k,n,ds,ans);
             return ans;
    }
};