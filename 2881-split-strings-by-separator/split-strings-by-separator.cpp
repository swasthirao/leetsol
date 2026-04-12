class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for (string word : words) {
            string temp = "";//to store all scanned chars

            for (char ch : word) {
                if (ch == separator) {
                    if (!temp.empty()) {//if first we get any c,in tht case temp=empty
                        ans.push_back(temp);
                        temp = "";//reset trmp to collect all chars
                    }
                } else {
                    temp += ch;//collect all chars..
                }
            }
            if (!temp.empty()) {
                ans.push_back(temp);
            }
        }

        return ans;
    }
};