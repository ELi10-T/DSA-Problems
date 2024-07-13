// Question : Reverse a Linked List in groups of given size K
// Example: Input: 1->2->3->4->5->6->7->8->NULL, K = 3
//          Output: 3->2->1->6->5->4->8->7->NULL
//          Input: 1->2->3->4->5->6->7->8->NULL, K = 5
//          Output: 5->4->3->2->1->8->7->6->NULL
// Solution 1 : Take a dummy node, count till that node/till null, reverse using three pointer strategy
//              , and connect them again.
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

Node *Solution(Node *head, int k)
{
    Node *dummy = new Node(0);
    dummy->next_ptr = head;

    // Write base cases
    if (head == NULL || head->next_ptr == NULL)
    {
        return head;
    }

    // First case
    Node *first_pointer = dummy;
    Node *curr = head;
    Node *next = head->next_ptr;

    int count = k - 1;

    while (next != NULL)
    {

        if (count == 0)
        {
            Node *temp = first_pointer->next_ptr;
            first_pointer->next_ptr = curr;
            temp->next_ptr = next;
            count = k - 1;
            first_pointer = temp;
            curr = next;
            next = next->next_ptr;
            continue;
        }

        Node *temp = next->next_ptr;
        next->next_ptr = curr;
        curr = next;
        next = temp;
        count--;
    }

    // Case where count != 0 but next == NULL
    if (count != 0)
    {
        Node *temp = first_pointer->next_ptr;
        first_pointer->next_ptr = curr;
        temp->next_ptr = next;
    }

    return dummy->next_ptr;
}

int main()
{
    Node *head = ExampleLinkedList(10);
    head = Solution(head, 3);
    PrintLL(head);
}