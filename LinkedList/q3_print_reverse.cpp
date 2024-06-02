// Question : Print reverse of a Linked List without actually reversing
// ************
// Solution 1 : Use Recursion
// Solution 2 : Use Stack
// Time Complexity : O(n);
// Space Complexity : O(n);

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

void PrintReverseLL(Node* head) {
    if (head == NULL) {
        return;
    }

    PrintReverseLL(head->next_ptr);
    cout<<head->data<<" ";
}

int main() {
    Node* head = ExampleLinkedList(5);
    PrintReverseLL(head);
}