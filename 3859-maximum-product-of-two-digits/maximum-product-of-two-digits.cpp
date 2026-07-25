class Solution {
public:
int lar=0;
int sec=0;

    int maxProduct(int n) {
        while(n > 0){
      int dig=n%10;
      n/=10;

       if(dig > lar){
         sec=lar;
         lar=dig;

       }
       else if(dig > sec){
        sec=dig;
       }
    }
      return lar*sec;

        
    }
};