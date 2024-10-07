// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> charSet;
        int maxLength = 0;
        int start = 0;

        for (int end = 0; end < s.length(); end++)
        {
            while (charSet.find(s[end]) != charSet.end())
            {
                charSet.erase(s[start]);
                start++;
            }
            charSet.insert(s[end]);
            maxLength = max(maxLength, end - start + 1);
        }
        return maxLength;
    }
};