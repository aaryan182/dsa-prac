// https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        return myAtoiRecursive(s, 0, 0, 1, false);
    }

private:
    int myAtoiRecursive(const string &s, int i, long long num, int sign, bool signSet) {
        int n = s.length();

        if (i >= n || (!isdigit(s[i]) && signSet)) {
            return sign * num;
        }

        if (s[i] == ' ' && !signSet) {
            return myAtoiRecursive(s, i + 1, num, sign, false);
        }

        if ((s[i] == '+' || s[i] == '-') && !signSet) {
            int newSign = (s[i] == '-') ? -1 : 1;
            return myAtoiRecursive(s, i + 1, num, newSign, true);
        }

        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            if (sign * num > INT_MAX) return INT_MAX;
            if (sign * num < INT_MIN) return INT_MIN;

            return myAtoiRecursive(s, i + 1, num, sign, true);
        }
        return sign * num;
    }
};
 