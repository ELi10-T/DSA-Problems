// Question : Reverse a Linked List
// ************
// Solution 1 : Maintain three pointers, first, second and temp, Then 
//              store the next node in temp and then shift the next pointer of first
//              second. Then shift first pointer to temp. and so on... 
// Space Complexity : O(1) constant
// Time Complexity : O(n)
// Solution 2 : Use Recursion, go to the last node and then shift the pointers from that node. 
// Space Complexity : O(n) stack - recursion. 
// Time Complexity : O(n)

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

Node* FirstSolution(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = head->next_ptr;

    while(next != NULL) {
        curr->next_ptr = prev;
        prev = curr;
        curr = next;
        next = next->next_ptr;
    }

    // Required as tail node will be left
    curr->next_ptr = prev;
    return curr;
}

Node* SecondSolution(Node* head) {
    if(head->next_ptr == NULL || head == NULL) {
        return head;
    }

    Node* last = SecondSolution(head->next_ptr);
    head->next_ptr->next_ptr = head;
    head->next_ptr = NULL;

    return last;
}

int main(){
    Node* head = ExampleLinkedList(5);
    // PrintLL(FirstSolution(head));
    PrintLL(SecondSolution(head));
}
