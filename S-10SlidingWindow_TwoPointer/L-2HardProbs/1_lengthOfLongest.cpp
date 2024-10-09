// https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/description/ 

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        if (k == 0 || s.empty()) return 0;
        
        unordered_map<char, int> char_count;
        int left = 0, right = 0, max_len = 0;

        while (right < s.size()) {
            char_count[s[right]]++;
            
            while (char_count.size() > k) {
                char_count[s[left]]--;
                if (char_count[s[left]] == 0) {
                    char_count.erase(s[left]);
                }
                left++;
            }
            
            max_len = max(max_len, right - left + 1);
            right++;
        }

        return max_len;
    }
};
