class Solution
{
public:
    vector<int> getFactors(int num)
    {
        vector<int> factors;
        for (int i = 1; i < num; i++)
            if (num % i == 0)
                factors.push_back(i);
        return factors;
    }
    bool checkPerfectNumber(int num)
    {
        vector<int> factors = getFactors(num);
        int sum = 0;
        for (int factor : factors)
            sum += factor;
        return sum == num;
    }
};