class Solution
{
public:
    int reverse(int x)
    {
        int tnum = x, revnum = 0;
        while (tnum)
        {
            int digit = tnum % 10;
            if ((revnum > INT_MAX / 10) || (revnum < INT_MIN / 10))
                return 0;
            revnum = revnum * 10 + digit;
            tnum /= 10;
        }
        return revnum;
    }
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        return x == reverse(x);
    }
};