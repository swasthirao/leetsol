class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       
        unordered_map<int,int>mp;

        for(int i = 0 ; i < nums.size() ; i++){

            if(mp.count(nums[i])){                               //like if k=2.. 1 -- 0,2--1,3--2..when 1 comes 1 --3


                    if(i - mp[nums[i]] <= k){
                        return true;
                    }
                    
            }

           mp[nums[i]]=i;

           
        }
        
        return false;
    }
};