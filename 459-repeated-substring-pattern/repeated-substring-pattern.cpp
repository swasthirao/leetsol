class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n= s.size();
        for(int len=1 ; len<=n/2 ; len++){
           
           if(n%len != 0)
           continue;

           //mightbevalidd

           string pat=s.substr(0,len);
            bool isvalid=true;

              for(int i=0 ; i<n ; i++){
                if(s[i] != pat[i%len]){
                    isvalid=false;
                    break;
                }
             


              }
                if(isvalid)
                return true;


        }
        return false;
    }
};