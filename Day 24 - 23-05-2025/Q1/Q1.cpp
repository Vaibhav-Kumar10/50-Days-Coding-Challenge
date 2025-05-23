class Solution
{
public:
    int calculate(string s)
    {
        int ans = 0, num = 0, sign = 1;
        stack<int> st;
        st.push(sign);
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (isdigit(ch))
                num = num * 10 + (ch - '0');
            else if (ch == '+' || ch == '-')
            {
                ans = ans + sign * num;
                sign = st.top() * (ch == '+' ? 1 : -1);
                num = 0;
            }
            else if (ch == '(')
                st.push(sign);
            else if (ch == ')')
                st.pop();
        }
        ans = ans + sign * num;
        return ans;
    }
};