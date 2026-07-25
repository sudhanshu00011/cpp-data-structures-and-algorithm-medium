// Time limit exceeds for this solution 

class Solution {
public:
    int divide(int dividend, int divisor) {
        bool negative;
        if ((dividend<0 && divisor>=0) || (dividend>= 0 && divisor<0)) negative=true;
        else negative = false;
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long ans = 0;
        while (a >= b) {
            a -= b;
            ans++;
        }
        if (negative) ans = -ans;
        if (ans > INT_MAX) return INT_MAX;
        if (ans < INT_MIN) return INT_MIN;
        return ans;
    }
};
