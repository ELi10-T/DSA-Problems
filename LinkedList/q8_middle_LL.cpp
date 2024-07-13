// Question: Middle of the LinkedList
// ***********
// Solution 1: Use slow_ptr, fast_ptr
// Space Complexity : O(1) Constant
// Time Complexity : O(n) Linear

#include<bits/stdc++.h>
#include "basic_operations_LL.h"

using namespace std;

Node* MiddleLinkedList(Node* head) {
    Node* slow_ptr = head;
    Node* fast_ptr = head;

    while(fast_ptr != NULL && fast_ptr->next_ptr != NULL) {
        slow_ptr = slow_ptr->next_ptr;
        fast_ptr = fast_ptr->next_ptr->next_ptr;
    }

    return slow_ptr;
}

int main() {
    Node* head = ExampleLinkedList(6);
    Node* middle = MiddleLinkedList(head);
    cout<<middle->data<<"\n";
}