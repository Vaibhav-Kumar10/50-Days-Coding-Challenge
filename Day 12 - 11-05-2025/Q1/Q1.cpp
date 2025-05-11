/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        if (head->next == NULL)
            return head;
        ListNode *cur = head;
        while (cur->next != NULL)
        {
            int val1 = max(cur->val, cur->next->val);
            int val2 = min(cur->val, cur->next->val);
            ListNode *gcdNode = new ListNode(gcd(val1, val2));
            gcdNode->next = cur->next;
            cur->next = gcdNode;
            cur = gcdNode->next;
        }
        return head;
    }
};