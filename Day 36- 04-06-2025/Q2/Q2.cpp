class Solution
{
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }

public:
    string reverseVowels(string s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            while (left < right && !isVowel(s[left]))
                left++;
            while (left < right && !isVowel(s[right]))
                right--;
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};