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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *right = head, *temp;
        while (n > 0 && right != NULL)
        {
            right = right->next;
            n--;
        }
        if (right == NULL)
        {
            temp = head;
            head = head->next;
            delete (temp);
            return head;
        }
        ListNode *left = head;
        while (right->next != NULL)
        {
            right = right->next;
            left = left->next;
        }
        temp = left->next;
        left->next = temp->next;
        temp->next = NULL;
        delete temp;
        return head;
    }
};
