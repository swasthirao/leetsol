class Solution {
public:

    string merge(string a, string b) {

        if(a.find(b) != string::npos)
            return a;

        int m = min(a.size(), b.size());

        for(int k = m; k >= 0; k--) {
            if(a.substr(a.size() - k) == b.substr(0, k))
                return a + b.substr(k);
        }

        return a + b;
    }

    string minimumString(string a, string b, string c) {

        vector<string> v = {a,b,c};

        sort(v.begin(), v.end());

        string ans = "";

        do {
            string cur = merge(merge(v[0],v[1]),v[2]);

            if(ans == "" ||
               cur.size() < ans.size() ||
               (cur.size() == ans.size() && cur < ans))
                ans = cur;

        } while(next_permutation(v.begin(),v.end()));

        return ans;
    }
};