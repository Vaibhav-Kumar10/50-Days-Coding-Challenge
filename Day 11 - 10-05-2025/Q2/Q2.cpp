class Solution
{
public:
    int trailingZeroes(int n)
    {
        // long long count = 0, fact = 1;
        // for (int i = 5; i <= n; i=i*5) {
        //     fact *= i;
        //     while (fact % 10 == 0) {
        //         count++;
        //         fact /= 10;
        //     }
        // }
        int count5 = 0;
        for (int i = 5; i <= n; i = i * 5)
        {
            count5 = count5 + n / i;
        }
        return count5;
    }
};