class Solution {
public:
    static bool cmp(string a, string b){//compaaaaarison :)
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        for(int x : nums){
            arr.push_back (to_string(x));//con all to str
        }

        sort(arr.begin(), arr.end(), cmp);//soo many steps to soorttt!!

        if(arr[0] == "0") 
                return "0";//cuz 00-->is 0 nooo u foool

        string ans = "";
        for(string s : arr){
            ans += s;
        }

        return ans;
    }
};