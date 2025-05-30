class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> finalRow;
        long long ans = 1;
        finalRow.push_back(ans);
        for (int i = 1; i <= rowIndex; i++)
        {
            ans = ans * (rowIndex - i + 1) / i;
            finalRow.push_back(ans);
        }
        return finalRow;
    }
};
