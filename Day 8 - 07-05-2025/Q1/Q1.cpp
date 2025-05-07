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
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *oddNode = head, *evenNode = head->next;
        ListNode *evenHead = evenNode;
        while (evenNode != NULL && evenNode->next != NULL)
        {
            oddNode->next = oddNode->next->next;
            evenNode->next = evenNode->next->next;
            oddNode = oddNode->next;
            evenNode = evenNode->next;
        }
        oddNode->next = evenHead;
        return head;
    }
};