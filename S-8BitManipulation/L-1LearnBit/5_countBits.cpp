// https://www.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1

class Solution{
    public:
    int countSetBits(int n)
    {
        int count =0;
        for(int i = 0; (1 << i)<=n; i++){
            int blockSize = 1 << (i+1);
            int fullBlocks = (n+1)/ blockSize;
            count += fullBlocks *(1<<i);
            int remainder = (n+1) % blockSize;
            count+= max(0,remainder-(1<<i));
        }
        return count;
    }
};