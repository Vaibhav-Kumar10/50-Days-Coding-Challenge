class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int s = 0, e = n - 1;
        int first = -1, last = -1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            int midEl = nums[mid];
            if (midEl == target)
            {
                first = mid;
                e = mid - 1;
            }
            else if (midEl > target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        s = 0, e = n - 1;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            int midEl = nums[mid];
            if (midEl == target)
            {
                last = mid;
                s = mid + 1;
            }
            else if (midEl > target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return {first, last};
    }
};