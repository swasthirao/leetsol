class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {

int com = 10;
          for(int i=0;i<nums1.size();i++){
                  for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                com=min(com,nums1[i]);                }
               
                  }
          }
if(com!=10)
return com;

        int min1=nums1[0];
        int min2=nums2[0]; 
        for(int i=1;i<nums1.size();i++){

if(nums1[i]<min1)
min1=nums1[i];
        }
              for(int i=1;i<nums2.size();i++){

if(nums2[i]<min2)
min2=nums2[i];
              }
              int res;
          
            if(min1<min2){
                return min1*10 + min2;
            }
            else
            {
                return min2*10 + min1;
            }
    } 
};