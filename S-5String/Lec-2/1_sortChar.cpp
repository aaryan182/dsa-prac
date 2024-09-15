// https://leetcode.com/problems/sort-characters-by-frequency/description/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> frequencyMap;
        for(char c: s) {
            frequencyMap[c]++;
        }

        vector<string> buckets(s.size() + 1);
        for(auto & entry : frequencyMap){
            char c = entry.first;
            int freq = entry.second;
            buckets[freq] += string(freq,c);
        }
        string result ;
        for(int i = buckets.size()-1; i>0; --i){
            if(!buckets[i].empty()){
                result += buckets[i];
            }
        }
        return result;
    }
};