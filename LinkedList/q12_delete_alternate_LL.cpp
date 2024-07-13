// Question : Delete Alternate Nodes of the Linked List
// Solution : Keep a prev node, link the prev node to the next node and delete curr node
// Time Complexity : O(n)
// Space Complexity : O(1)
// Solution 2 : Challenge -- Try to solve recursively

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

Node* Solution(Node* head) {
    Node* curr = head;

    if(curr->next_ptr == NULL && curr->next_ptr->next_ptr == NULL) {
        return curr;
    }

    while (curr != NULL && curr->next_ptr != NULL) {
        Node* prev = curr;
        Node* toBeDeleted = curr->next_ptr;
        curr->next_ptr = toBeDeleted->next_ptr;
        curr = curr->next_ptr;
        free(toBeDeleted);
    }

    return curr;
}

void Solution2(Node* head) {
    if(head == NULL || head->next_ptr == NULL) {
        return ;
    }

    Node* temp = head->next_ptr;
    head->next_ptr = temp->next_ptr;
    free(temp);
    Solution2(head->next_ptr);
}

int main() {

}