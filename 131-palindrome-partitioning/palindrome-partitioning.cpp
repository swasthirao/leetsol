class Solution {
public:
      bool isPalin(string s){
            string s2;
            s2=s;
            reverse(s2.begin(),s2.end());
            return s == s2;
        }
    void getParts(string s,vector<string>&combs,vector<vector<string>>&ans){

        if(s.size() == 0){
            ans.push_back(combs);
            return;
        }
        for(int i=0 ; i<s.size() ; i++){
        string parts=s.substr(0,i+1);
         if(isPalin(parts)){
            combs.push_back(parts);

                getParts(s.substr(i+1),combs,ans);

                combs.pop_back();
         }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>combs;

        getParts(s,combs,ans);

        return ans;
    }
};