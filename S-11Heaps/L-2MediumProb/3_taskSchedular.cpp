// https://leetcode.com/problems/task-scheduler/

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> freq;
        for(char task: tasks){
            freq[task]++;
        }

        int maxFreq = 0;
        for(const auto& entry : freq){
            maxFreq = max(maxFreq, entry.second);
        }

        int maxFreqCount = 0;
        for (const auto& entry : freq) {
            if (entry.second == maxFreq) {
                maxFreqCount++;
            }
        }

        int partCount = maxFreq - 1;
        int partLength = n - (maxFreqCount - 1);
        int emptySlots = partCount * partLength;
        int availableTasks = tasks.size() - maxFreq * maxFreqCount;
        int idles = max(0, emptySlots - availableTasks);

        return tasks.size() + idles;
    }
};