/*
Fast and Slow Pointers: Used for cyclic problems like finding loops in linked lists.
Use 2 pointers moving at different speeds.
*/
// Middle of a Linked List

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};