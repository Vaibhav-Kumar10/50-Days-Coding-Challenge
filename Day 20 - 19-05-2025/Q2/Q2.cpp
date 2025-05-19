class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int maxEl = nums[0], minEl = nums[0];
        for (int el : nums)
        {
            maxEl = max(maxEl, el);
            minEl = min(minEl, el);
        }
        int GCD = gcd(maxEl, minEl);
        return GCD;
    }
};