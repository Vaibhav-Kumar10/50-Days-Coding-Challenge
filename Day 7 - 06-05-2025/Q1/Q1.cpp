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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL)
            return head;
        int len = 1;
        ListNode *lastNode = head, *temp = head;
        while (lastNode->next != NULL)
        {
            lastNode = lastNode->next;
            len++;
        }
        k = k % len;
        if (k == 0)
            return head;
        k = len - k - 1;
        lastNode->next = head;
        while (k--)
            temp = temp->next;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};