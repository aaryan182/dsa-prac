// https://www.geeksforgeeks.org/generate-binary-strings-without-consecutive-1s/

#include <bits/stdc++.h>
using namespace std;

void generateHelper(int k, string current, char lastChar)
{
    if (current.length() == k)
    {
        cout << current << endl;
        return;
    }

    if (lastChar == '1')
    {
        generateHelper(k, current + "0", '0');
    }
    else
    {
        generateHelper(k, current + "0", '0');
        generateHelper(k, current + "1", '1');
    }
}

void generateAllStrings(int k)
{
    generateHelper(k, "0", '0');
    generateHelper(k, "1", '1');
}

int main()
{
    int k = 3;
    generateAllStrings(k);
    return 0;
}