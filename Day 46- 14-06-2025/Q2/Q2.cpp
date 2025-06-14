class Solution
{
public:
    bool isprime(int x)
    {
        return (x == 2 || x == 3 || x == 5 || x == 7 || x == 11 || x == 13 ||
                x == 17 || x == 19 || x == 23 || x == 29 || x == 31);
    }
    int countPrimeSetBits(int left, int right)
    {
        int count = 0;
        for (int i = left; i <= right; i++)
        {
            int setbits = 0;
            int num = i;
            while (num > 0)
            {
                setbits += (num % 2);
                num /= 2;
            }
            if (isprime(setbits))
                count++;
        }
        return count;
    }
};
