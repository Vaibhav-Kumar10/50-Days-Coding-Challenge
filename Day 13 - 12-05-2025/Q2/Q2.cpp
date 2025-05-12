class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int ansSign = 1;
        for (int el : nums)
        {
            if (el == 0)
                return 0;
            else if (el < 0)
                ansSign *= -1;
        }
        return ansSign;
    }
};