class Solution {
public:
 bool isvov(char ch){
    if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u')
    return true;

    return false;
   }
    int vowelStrings(vector<string>& words, int left, int right) {
   
  
   int count=0;

        for(int i = left;i<=right ;i++){
            string s=words[i];

            if(isvov(s[0]) && isvov(s[s.length()-1])){
                count++;
                
            }
            
        }
        return count;
    }
};