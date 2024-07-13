// Question : All even numbers must appear before odd nodes in a LL
// Solution : Go to the last node, and then start traversing from the first node
//            If it is even do nothing, if it is odd, put it after that node.
// Time Complexity : O(n)
// Space Complexity : O(1). In-place

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

Node* Solution(Node* head) {
    Node* lastNode = head;
    Node* currNode = head;
    while(currNode->next_ptr != NULL) {
        currNode = currNode->next_ptr; 
    }
    lastNode = currNode;

    currNode = head;


    // Beginning nodes case
    while(currNode != lastNode && currNode->data % 2 != 0) {
        Node* temp = currNode->next_ptr;
        lastNode->next_ptr = currNode;
        currNode->next_ptr = NULL;
        currNode = temp;    
    }

    // all odd case
    if(currNode == lastNode) {
        return currNode;
    }

    // some even, some odd or all even, so the starting will def. be currNode
    Node* res = currNode;
    Node* prevNode = currNode;
    currNode = currNode->next_ptr;

    while(currNode != lastNode) {
        // odd case
        if(currNode->data % 2 != 0) {
            prevNode->next_ptr = currNode->next_ptr;
            lastNode->next_ptr = currNode;
            currNode->next_ptr = NULL;
            currNode = prevNode->next_ptr;
        }

        currNode = currNode->next_ptr;
        prevNode = prevNode->next_ptr;
    }

    return res;
}

int main() {

}