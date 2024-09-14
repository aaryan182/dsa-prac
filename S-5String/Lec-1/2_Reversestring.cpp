// https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
        int left = 0, right = s.length() -1;
        while(left <= right && s[left] == ' ') left++;
        while(right >= left && s[right] == ' ') right--;

        vector<string> words;
        string word;
        while(left <= right){
            char c = s[left];
            if(c != ' '){
                word += c;
            }
            else if(word.length() > 0){
                words.push_back(word);
                word.clear();
            }
            left++;
        }
        if(word.length() > 0){
            words.push_back(word);
        }
        reverse(words.begin() , words.end());

        string result;
        for(int i=0; i<words.size() ; i++){
            result += words[i];
            if(i<words.size() -1){
                result += " ";
            }
        }
        return result;
    }
};