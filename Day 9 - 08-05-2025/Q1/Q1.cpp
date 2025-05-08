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
    ListNode *swapNodes(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *temp = head;
        for (int i = 1; i < k; i++)
            temp = temp->next;
        ListNode *left = temp, *right = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            right = right->next;
        }
        left->val = left->val + right->val;
        right->val = left->val - right->val;
        left->val = left->val - right->val;
        return head;
    }
};