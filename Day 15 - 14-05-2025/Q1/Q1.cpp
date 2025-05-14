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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *t1 = l1, *t2 = l2, *dummy = new ListNode(-1), *cur = dummy;
        int sum = 0, carry = 0;
        while (t1 != NULL || t2 != NULL || carry != 0)
        {
            sum = carry;
            if (t1)
            {
                sum = sum + t1->val;
                t1 = t1->next;
            }
            if (t2)
            {
                sum = sum + t2->val;
                t2 = t2->next;
            }
            ListNode *new_node = new ListNode(sum % 10);
            carry = sum / 10;
            cur->next = new_node;
            cur = cur->next;
        }
        return dummy->next;
    }
};