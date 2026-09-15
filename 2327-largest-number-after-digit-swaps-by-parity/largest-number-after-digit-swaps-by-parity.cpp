class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
         
         priority_queue<int>odd;
         priority_queue<int>even;

        for(char c : s){
            int num=c - '0';
             if(num % 2 == 0){
                even.push(num);
             }
             else{
                odd.push(num);
             }
        }

        for(int i=0 ; i<s.size() ; i++){
            int dig=s[i]-'0';

            if(dig % 2 == 0){
                s[i]=even.top() +'0';
                even.pop();
            }
            else{
                s[i]=odd.top() +'0';
                odd.pop();
            }
        }
        return stoi(s);
    }
};