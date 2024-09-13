// https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557

// Painter's partition or split array largest sum

bool isPossible(vector<int> &boards, int k, int maxTime)
{
    int painters = 1; // Start with the first painter
    int currentSum = 0;

    for (int board : boards)
    {
        currentSum += board;

        if (currentSum > maxTime)
        {
            painters++;
            currentSum = board;

            if (painters > k)
                return false;
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();

    if (n < k)
        return -1;

    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    int result = high;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(boards, k, mid))
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return result;
}
