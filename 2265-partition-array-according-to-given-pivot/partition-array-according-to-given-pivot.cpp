class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
      vector<int>left;
      vector<int>piv;
      vector<int>right;   
      for(int x : nums){

        if(x < pivot)
        left.push_back(x);
      
        
       else if(x == pivot)
        piv.push_back(x);
      
    
  else
        right.push_back(x);
      }

vector<int>ans;

for(int x : left){
    ans.push_back(x);
}
for(int x :piv ){
    ans.push_back(x);
}
for(int x : right){
    ans.push_back(x);
}

       return ans; 


         

    }
};