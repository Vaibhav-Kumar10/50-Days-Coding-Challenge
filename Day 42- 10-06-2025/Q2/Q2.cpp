class Solution
{
public:
    string reverseWords(string s)
    {
        string str = "";
        stack<string> strStack;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                if (str.size() != 0)
                {
                    strStack.push(str);
                    str = "";
                }
            }
            else
                str += s[i];
        }
        if (str.size() != 0)
            strStack.push(str);
        string reversed = "";
        while (!strStack.empty())
        {
            str = strStack.top();
            reversed += str;
            strStack.pop();
            if (!strStack.empty())
                reversed += " ";
        }
        return reversed;
    }
};