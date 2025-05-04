class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int s = 1, e = num;
        while (s <= e)
        {
            long long int mid = s + (e - s) / 2;
            long long int square = mid * mid;
            if (square > num)
                e = mid - 1;
            else if (square < num)
                s = mid + 1;
            else
                return true;
        }
        return false;
    }
};