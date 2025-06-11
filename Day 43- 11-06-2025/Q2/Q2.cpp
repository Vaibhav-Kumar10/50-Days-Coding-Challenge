class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1 || numRows >= s.length())
            return s;
        vector<string> rows(numRows);
        int idx = 0, direction = 1;
        for (char c : s)
        {
            rows[idx] += c;
            if (idx == 0)
                direction = 1;
            else if (idx == numRows - 1)
                direction = -1;
            idx += direction;
        }
        string result;
        for (const string &row : rows)
            result += row;
        return result;
    }
};
