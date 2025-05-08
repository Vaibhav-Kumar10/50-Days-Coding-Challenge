class Solution
{
public:
    int findNthDigit(int n)
    {
        long long digitLength = 1, count = 9, startNum = 1;
        // Step 1: Find the range of numbers
        while (n > digitLength * count)
        {
            n -= digitLength * count;
            digitLength++;
            count *= 10;
            startNum *= 10;
        }
        // Step 2: Find the actual number containing the digit
        startNum += (n - 1) / digitLength;
        // Step 3: Find the exact digit in that number
        string numStr = to_string(startNum);
        return numStr[(n - 1) % digitLength] - '0';
    }
};
