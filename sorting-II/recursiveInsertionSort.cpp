// https://www.geeksforgeeks.org/problems/insertion-sort/1

class Solution
{
    public:
    void insert(int arr[], int i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    public:
    void insertionSort(int arr[], int n)
    {
        if (n <= 1)
            return;
        insertionSort(arr, n - 1);
        insert(arr, n - 1);
    }
};