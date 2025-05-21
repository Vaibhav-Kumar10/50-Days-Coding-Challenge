class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        // int cnt = 0, el;
        // for (int i = 0; i < n; i++) {
        //     if (cnt == 0) {
        //         cnt = 1;
        //         el = nums[i];
        //     } else if (el == nums[i])
        //         cnt++;
        //     else
        //         cnt--;
        // }
        // int cnt1 = 0;
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] == el)
        //         cnt1++;
        // }
        // if (cnt1 > (n / 2))
        //     return el;
        // for (int i = 0; i < n; i++) {
        //     int cnt = 0;
        //     for (int j = 0; j < n; j++)
        //         if (nums[i] == nums[j])
        //             cnt++;
        //     if (cnt > n / 2)
        //         return nums[i];
        // }
        map<int, int> mpp;
        for (int el : nums)
            mpp[el]++;
        for (auto it : mpp)
            if (it.second > n / 2)
                return it.first;

        return -1;
    }
};