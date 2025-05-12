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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *newHead = new ListNode(-1, head);
        ListNode *prev = newHead, *currentNode = head;
        while (currentNode != NULL)
        {
            if (currentNode->next != NULL &&
                currentNode->val == currentNode->next->val)
            {
                while (currentNode->next != NULL &&
                       currentNode->next->val == currentNode->val)
                    currentNode = currentNode->next;
                prev->next = currentNode->next;
            }
            else
                prev = prev->next;
            currentNode = currentNode->next;
        }
        return newHead->next;
    }
};