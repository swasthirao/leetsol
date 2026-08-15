class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.size();
        if(k > n)
        return false;

        int fre[26] = {};

        for(char c : s)
        fre[c - 'a']++;
         
         int odd=0;

         for(int i=0 ; i<26 ; i++){
             
             if(fre[i] % 2 != 0)
                odd++;
         }

         return odd <= k;


    }
};