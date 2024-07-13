// Question : Given a singly linked list, The task is to rotate the linked list 
//            counter-clockwise by k nodes.
// Example  : Input: linked list = 10->20->30->40->50->60, k = 4
//            Output: 50->60->10->20->30->40.
// Solution1 : Find the length of the LL, store last pointer, take mod, Then 
//             go to that number node and cut off the link. From last set it to first pointer.
// Time Complexity : O(n)
// Space Complexity : O(1)

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

Node* Solution1(Node* head, int k) {
    Node* last = NULL;
    int count = 1;

    Node* temp = head;
    while(temp != NULL && temp->next_ptr != NULL) {
        temp = temp->next_ptr;
        count++;
    }
    last = temp;

    int nodeCount = k%count-1;

    if(k == 0) {
        return head;
    } 

    last->next_ptr = head;
    temp = head;
    while(nodeCount != 0) {
        temp = temp->next_ptr;
    }

    Node* result = temp->next_ptr;
    temp->next_ptr = NULL;
    return result;
}

int main() {

}

