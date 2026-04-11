class Solution {
public:
    int nextNum(int n) {
        int sum = 0;
//typ prob
        while (n > 0) {
            int digit = n % 10;
            sum += digit* digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1 && !seen.count(n)) {//same no not allowed..
            seen.insert(n);//if not same then insert..
            n = nextNum(n);//obt sum
        }

        return n == 1;
    }
};