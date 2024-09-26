// https://www.geeksforgeeks.org/problems/bit-manipulation-1666686020/1

class Solution {
  public:
    void bitManipulation(int num, int i) {
        int getIthBit = (num >> (i - 1)) & 1;
        int setIthBit = num | (1 << (i - 1));
        int clearIthBit = num & ~(1 << (i - 1));
        cout << getIthBit << " " << setIthBit << " " << clearIthBit << endl;
    }
};