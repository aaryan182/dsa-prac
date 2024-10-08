// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/

class Solution {
public:
    int numberOfSubstrings(string s) {
        int count[3] = {0,0,0};
        int result = 0, left = 0;

        for(int right = 0; right<s.length(); right++){
            count[s[right] - 'a']++;

            while(count[0] > 0 && count[1] > 0 && count[2] > 0){
                result += (s.length() - right);
                count[s[left]-'a']--;
                left++;
            }
        }
        return result;
    }
};