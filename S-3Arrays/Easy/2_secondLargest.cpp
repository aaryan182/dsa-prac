//https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int print2largest(vector<int> &arr) {
        if (arr.size() < 2) return -1;
        set<int> distinct_elements(arr.begin(), arr.end()); // to remove duplicates
        
        if (distinct_elements.size() < 2) return -1;

        vector<int> distinct_vector(distinct_elements.begin(), distinct_elements.end());
    
        return *(distinct_vector.rbegin() + 1);
    }
};