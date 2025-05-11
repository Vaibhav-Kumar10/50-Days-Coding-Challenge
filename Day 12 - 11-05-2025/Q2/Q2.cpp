class Solution
{
public:
    int countOdds(int low, int high)
    {
        int rangeLength = high - low + 1;
        int noCount = rangeLength / 2;
        if (rangeLength % 2 != 0 && low % 2 != 0)
            noCount++;
        return noCount;
    }
};