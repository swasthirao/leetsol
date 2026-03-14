class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
           while(j<pref.length() && j<strs[i].length() && pref[j]==strs[i][j]){
            j++;
           }
           pref=pref.substr(0,j);

           if(pref==""){
            return "";
           }

        }
        return pref;
        
    }
};