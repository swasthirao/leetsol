class Solution {
public:
     bool isvov(char c){
            char ch= tolower(c);
            return (ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' );
        }
    string reverseVowels(string s) {
        
        int i=0,j=s.length()-1;
      
        while(i < j){
            while(i < j && !isvov(s[i])) i++;
             while(i < j && !isvov(s[j])) j--;

             swap(s[i],s[j]);
             i++;
             j--;
        }
        return s;
    }
};