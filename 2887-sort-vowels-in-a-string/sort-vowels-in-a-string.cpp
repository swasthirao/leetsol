class Solution {
public:
   
        bool isvowel(char ch){
            ch= tolower(ch);
            return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
        }

         string sortVowels(string s) {
            string vov="";

            for(char ch : s){
                if(isvowel(ch)){
                    vov+=ch;
                }
            }

            sort(vov.begin(),vov.end());
                    int j=0;
                for(int i = 0;i<s.size();i++){
                    if(isvowel(s[i])){
                            s[i]=vov[j];
                            j++;
                    }
                }
                return s;
         }

    
};