class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (string el : tokens)
        {
            if (el == "+" || el == "-" || el == "*" || el == "/")
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int result;
                if (el == "+")
                    result = a + b;
                else if (el == "-")
                    result = a - b;
                else if (el == "*")
                    result = a * b;
                else
                    result = a / b;
                st.push(result);
            }
            else
                st.push(stoi(el));
        }
        return st.top();
    }
};