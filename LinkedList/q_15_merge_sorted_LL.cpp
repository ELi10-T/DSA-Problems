// Question : There are 2 sorted LLs, merge them
// Solution : Use merge sort 2nd part.
// Time Complexity : O(N+M)
// Space Complexity : O(1)

#include <bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

Node* Solution(Node *head1, Node *head2)
{
    Node *dummy = new Node(0);
    Node *temp = dummy;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            temp->next_ptr = head1;
            head1 = head1->next_ptr;
        }
        else
        {
            temp->next_ptr = head2;
            head2 = head2->next_ptr;
        }
        temp = temp->next_ptr;
    }

    if (head1 != NULL)
    {
        temp->next_ptr = head1;
    }

    if (head2 != NULL)
    {
        temp->next_ptr = head2;
    }

    return dummy->next_ptr;
}

int main()
{
}
