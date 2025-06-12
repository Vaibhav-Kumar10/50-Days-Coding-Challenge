class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' | ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int ans = 0, cnt = 0, l = 0;
        for (int r = 0; r < s.length(); r++) {
            if (isVowel(s[r]))      cnt++;
            if (r - l + 1 == k) {
                ans = max(ans, cnt);
                if (isVowel(s[l]))  cnt--;
                l++;
            }
        }
        return ans;
    }
};F