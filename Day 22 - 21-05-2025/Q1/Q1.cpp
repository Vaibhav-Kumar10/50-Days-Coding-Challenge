class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        stack<int> st;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            if (ch == '(')
                st.push(i);
            else if (ch == ')')
            {
                if (st.empty() || s[st.top()] == ')')
                    st.push(i);
                else if (!st.empty() && s[st.top()] == '(')
                    st.pop();
            }
        }
        string ans = "";
        for (int i = n - 1; i >= 0; i--)
        {
            char ch = s[i];
            if (!st.empty() && st.top() == i)
                st.pop();
            else
                ans += ch;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};