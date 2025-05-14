class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string column = "";
        while (columnNumber)
        {
            columnNumber--;
            int remainder = columnNumber % 26;
            column += (remainder + 'A');
            columnNumber /= 26;
        }
        reverse(column.begin(), column.end());
        return column;
    }
};