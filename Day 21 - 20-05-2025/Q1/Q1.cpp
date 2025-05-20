class Solution
{
public:
    bool checkValidString(string s)
    {
        stack<int> opener, stars;
        for (int i = 0; i < s.length(); i++)
        {
            char curSymbol = s[i];
            if (curSymbol == '(')
                opener.push(i);
            if (curSymbol == '*')
                stars.push(i);
            if (curSymbol == ')')
            {
                if (!opener.empty())
                    opener.pop();
                else if (!stars.empty())
                    stars.pop();
                else
                    return false;
            }
        }
        while (!opener.empty())
        {
            if (stars.empty())
                return false;
            int openid = opener.top(), starid = stars.top();
            if (starid > openid)
            {
                opener.pop();
                stars.pop();
            }
            else
                return false;
        }
        return opener.empty();
    }
};