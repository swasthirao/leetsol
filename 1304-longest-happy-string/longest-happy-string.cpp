class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
       priority_queue<pair<int,char>>pq;
       
       if(a > 0)
       pq.push({a,'a'});

         if(b > 0)
       pq.push({b,'b'});

        if(c > 0)
       pq.push({c,'c'});

       string ans;

       while(!pq.empty()){

        auto first=pq.top();
        pq.pop();


        int freq=first.first;
        char ch=first.second;

         if(ans.size() >=2 && ans[ans.size() -1]==ch && ans[ans.size() - 2]== ch){
             
             if(pq.empty())
             break;

             auto sec=pq.top();
             pq.pop();
          

             ans+=sec.second;
             sec.first--;

              if(sec.first > 0)
              pq.push(sec);

              pq.push(first);
         }
         else
         {
            ans+=ch;
            freq--;
            if(freq > 0)
            pq.push({freq,ch});
         }
       }
     return ans;
    }
};