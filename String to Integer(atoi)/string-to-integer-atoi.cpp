class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int i=0, f=0;
        while (i<s.length() && s[i] == ' ') i++;
        if (i<s.length() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }
        while (i<s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (f>INT_MAX/10 || (f==INT_MAX/10 && digit>7)) {
                return (sign==1) ? INT_MAX : INT_MIN;
            }
            f=f*10+digit;
            i++;
        }
        return sign*f;
    }
};
