// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

class Solution {
public:
    const vector<string> digitToLetters = {
        "",    
        "",    
        "abc", 
        "def", 
        "ghi", 
        "jkl", 
        "mno", 
        "pqrs", 
        "tuv",  
        "wxyz" 
    };

    void backtrack(const string& digits, int index, string& current, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        char digit = digits[index];
        const string& letters = digitToLetters[digit - '0']; 
        for (char letter : letters) {
            current.push_back(letter); 
            backtrack(digits, index + 1, current, result); 
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) {
            return result; 
        }

        string current;
        backtrack(digits, 0, current, result);
        return result;
    }
};