class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
//no overfloww..assingn max or minn
        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
       long long ans = 0;

        while (a>= b) {
            long long temp = b;
            long long multiple = 1;

            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            ans += multiple;
        }

        if ((dividend < 0) ^ (divisor < 0))//exor to actualyy get the no
            ans = -ans;

        return (int)ans;//truncate and return ans finally..
    }
};