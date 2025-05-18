class Solution
{
public:
    bool isValid(string str)
    {
        stack<char> st;
        for (int i = 0; i < str.length(); i++)
        {
            char curSymbol = str[i];
            if ((curSymbol == '[') || (curSymbol == '(') || (curSymbol == '{'))
                st.push(curSymbol);
            else
            {
                if (st.empty())
                    return false;
                char ch = st.top();
                st.pop();
                if (((curSymbol == ']') && (ch == '[')) ||
                    ((curSymbol == ')') && ((ch == '('))) ||
                    ((curSymbol == '}') && ((ch == '{'))))
                    continue;
                else
                    return false;
            }
        }
        return st.empty();
    }
};