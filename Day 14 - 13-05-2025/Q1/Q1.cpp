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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *lesser = new ListNode(-1);
        ListNode *greater = new ListNode(-1);
        ListNode *less = lesser, *great = greater, *temp = head;
        while (temp != NULL)
        {
            if (temp->val < x)
            {
                less->next = temp;
                less = less->next;
                temp = temp->next;
            }
            else
            {
                great->next = temp;
                great = great->next;
                temp = temp->next;
            }
        }
        less->next = greater->next;
        great->next = NULL;
        return lesser->next;
    }
};