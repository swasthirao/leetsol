class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string a="";
        a+=s1[0];
        a+=s1[2];

        string b="";
        b+=s1[1];
        b+=s1[3];

        string c="";
        c+=s2[0];
        c+=s2[2];

        string d="";
        d+=s2[1];
        d+=s2[3];

        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());

        return a==c && b==d;
    }
};