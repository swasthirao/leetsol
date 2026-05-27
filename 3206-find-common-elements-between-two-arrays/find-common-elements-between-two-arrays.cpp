class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        
        int cnt1=0;
        int cnt2=0;

        for(int x : nums1){
            if(set2.count(x))
            cnt1++;
        }

        for(int x : nums2){
            if(set1.count(x))
            cnt2++;
        }
        
        return {cnt1,cnt2};

    }
};