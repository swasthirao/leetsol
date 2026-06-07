class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>m1,m2;

        for( char c : word1 ){
            m1[c]++;
        }

        for( char c : word2 ){
            m2[c]++;
        }

        for(auto x : m1){
            if( m2.find(x.first) == m2.end())
            return false;
        }

            for(auto x : m2){
            if( m1.find(x.first) == m1.end())
            return false;
        }

        vector<int>f1,f2;

        for(auto x : m1){
           f1.push_back(x.second);
        }
        
         for(auto x : m2){
           f2.push_back(x.second);
        }
        
        sort(f1.begin() , f1.end());
        sort(f2.begin() , f2.end());
        return f1 == f2;
    }

};