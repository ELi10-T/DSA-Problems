// Question : Delete a LinkedList
// ***********
// Solution 1: Sequentially free them.
// Space Complexity : O(1)
// Time Complexity : O(n)

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;


void Solution1(Node* head) {
    
    if(head == NULL) {
        return ;
    }

    if(head->next_ptr == NULL) {
        free(head);
    }

    Node* next = head->next_ptr;

    while(head != NULL) {
        free(head);
        head = next;
        next = next->next_ptr;
    }
}