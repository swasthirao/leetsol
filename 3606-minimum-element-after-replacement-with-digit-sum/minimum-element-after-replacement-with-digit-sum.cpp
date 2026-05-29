class Solution {
public:
    int leastsum(int num){
        int sum = 0;

        while(num > 0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        
        int minm=INT_MAX;
        for(int num : nums){

            minm = min(minm,leastsum(num));
        }
        return minm;
    }
};