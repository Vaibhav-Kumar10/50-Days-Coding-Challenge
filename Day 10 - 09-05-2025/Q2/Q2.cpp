class Solution
{
public:
    int bulbSwitch(int n)
    {
        int squareRoot = 0, s = 1, e = n;
        while (s <= e)
        {
            long long int mid = s + (e - s) / 2;
            long long int square = mid * mid;
            if (square > n)
                e = mid - 1;
            else
            {
                squareRoot = mid;
                s = mid + 1;
            }
        }
        return squareRoot;
        // return sqrt(n);
    }
};

// class Solution
// {
// public:
//     bool isPerfectSquare(int num)
//     {
//         int s = 1, e = num;
//         while (s <= e)
//         {
//             long long int mid = s + (e - s) / 2;
//             long long int square = mid * mid;
//             if (square > num)
//                 e = mid - 1;
//             else if (square < num)
//                 s = mid + 1;
//             else
//                 return true;
//         }
//         return false;
//     }
//     int bulbSwitch(int n)
//     {
//         int count = 0;
//         for (int i = 0; i <= n; i++)
//         {
//             if (isPerfectSquare(i))
//                 count++;
//         }
//         return count;
//     }
// };

// class Solution
// {
// public:
//     int countFactors(int num)
//     {
//         int count = 0;
//         for (int i = 1; i * i <= num; i++)
//         {
//             if (num % i == 0)
//             {
//                 if (i * i == num)
//                     count += 1;
//                 else
//                     count += 2;
//             }
//         }
//         return count;
//     }
//     int bulbSwitch(int n)
//     {
//         int count = 0;
//         for (int i = 1; i <= n; i++)
//             if (countFactors(i) % 2 == 1)
//                 count++;
//         return count;
//     }
// };
