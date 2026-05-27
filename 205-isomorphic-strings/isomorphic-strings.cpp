class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int , int>m1;
        unordered_map<int , int>m2; 

        for(int i = 0 ; i < s.size() ; i++ ){

            char c1=s[i];
            char c2=t[i];

                if(m1.count(c1) && c2 != m1[c1]){
                    return false;
                }

                   if(m2.count(c2) && c1 != m2[c2]){
                    return false;
                }



          m1[c1]=c2;
          m2[c2]=c1;

       


        }
        return true;
    }
};