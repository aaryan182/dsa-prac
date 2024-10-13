// https://leetcode.com/problems/hand-of-straights/

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) {
            return false;
        }
        map<int, int> freq;
        for (int card : hand) {
            freq[card]++;
        }
        for (auto& [card, count] : freq) {
            if (count > 0) {
                int need = count; 
                for (int i = 0; i < groupSize; i++) {
                    if (freq[card + i] < need) return false;
                    freq[card + i] -= need; 
                }
            }
        }
        return true;
    }
};
