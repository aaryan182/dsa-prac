// https://leetcode.com/problems/remove-k-digits/description/

class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        if (k == n) return "0";  

        string result = "";
        
        for (char digit : num) {
            while (!result.empty() && k > 0 && result.back() > digit) {
                result.pop_back(); 
                k--;
            }
            result.push_back(digit);  
        }

        while (k > 0) {
            result.pop_back();
            k--;
        }
        int non_zero = 0;
        while (non_zero < result.size() && result[non_zero] == '0') {
            non_zero++;
        }
        return non_zero == result.size() ? "0" : result.substr(non_zero);
    }
};