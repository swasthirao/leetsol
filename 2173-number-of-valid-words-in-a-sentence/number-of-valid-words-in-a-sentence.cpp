

    bool isvalid(string s){
        int hypen=0;
        for(int i = 0 ; i < s.size() ; i++){
            char ch=s[i];

            if(isdigit(ch)){
                return false;
            }

            //int hypen=0;

            if(ch == '-'){
                hypen++;
            
            if(hypen > 1)
            return false;

            if(i == 0 || i == s.size()-1)
            return false;

           if(!islower(s[i-1]) || !islower(s[i+1]))
           return false;
            }

        if(ch == '!' || ch == '.' || ch == ',') {

            if(i != s.size()-1){
                return false;
            }
        }
        
        }
        return true;
    }


class Solution {
public:

    int countValidWords(string sentence) {
        stringstream ss(sentence);
        string word;
        int cnt=0;
        while(ss >> word){
            if(isvalid(word)){
                cnt++;
            }

        }
        return cnt;
    }
};