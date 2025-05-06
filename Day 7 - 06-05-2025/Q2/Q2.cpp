class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> ans;
        int sum = 1, n = digits.size();
        for (int i = n - 1; i >= 0; i--)
        {
            int digit = digits[i];
            sum = sum + digit;
            int newDigit = sum % 10;
            sum = sum / 10;
            ans.push_back(newDigit);
        }
        if (sum != 0)
            ans.push_back(sum);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};