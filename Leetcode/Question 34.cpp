class Solution {
    public:
        int myAtoi(std::string s) {
            int i = 0;
            int sign = 1;
            long long result = 0;
    
            // 1. Ignore leading whitespace
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
    
            // 2. Determine the sign
            if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
                sign = (s[i] == '-') ? -1 : 1;
                i++;
            }
    
            // 3. Read the integer
            while (i < s.length() && isdigit(s[i])) {
                result = result * 10 + (s[i] - '0');
                if (result * sign > INT_MAX) {
                    return INT_MAX;
                }
                if (result * sign < INT_MIN) {
                    return INT_MIN;
                }
                i++;
            }
    
            // 4. Round the integer
            result *= sign;
            if (result > INT_MAX) {
                return INT_MAX;
            }
            if (result < INT_MIN) {
                return INT_MIN;
            }
    
            return static_cast<int>(result);
        }
    };