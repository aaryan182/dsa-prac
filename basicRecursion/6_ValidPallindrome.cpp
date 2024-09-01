// https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    bool isPalindrome(string s) {
        // Remove non-alphanumeric characters and convert to lowercase
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
        }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string reversed = s;
        reverse(reversed.begin(), reversed.end());
        return s == reversed;
    }
};