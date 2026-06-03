class Solution {
public:
    string findReplaceString(string s, vector<int>& indices,
                             vector<string>& sources,
                             vector<string>& targets) {

        vector<int> match(s.size(), -1);

        for(int i = 0; i < indices.size(); i++)
        {
            int idx = indices[i];

            if(s.substr(idx, sources[i].size()) == sources[i])
                match[idx] = i;
        }

        string ans;

        for(int i = 0; i < s.size(); )
        {
            if(match[i] >= 0)
            {
                int k = match[i];
                ans += targets[k];
                i += sources[k].size();
            }
            else
            {
                ans += s[i];
                i++;
            }
        }

        return ans;
    }
};