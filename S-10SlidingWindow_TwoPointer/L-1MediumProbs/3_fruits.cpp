// https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1

class Solution
{
public:
    int totalFruits(vector<int> &arr)
    {
        unordered_map<int, int> fruitCount;
        int left = 0, maxFruits = 0;

        for (int right = 0; right < arr.size(); right++)
        {
            fruitCount[arr[right]]++;

            while (fruitCount.size() > 2)
            {
                fruitCount[arr[left]]--;
                if (fruitCount[arr[left]] == 0)
                    fruitCount.erase(arr[left]);
                left++;
            }
            maxFruits = max(maxFruits, right - left + 1);
        }
        return maxFruits;
    }
};