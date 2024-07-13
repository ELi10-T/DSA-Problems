// Question: Detect a loop in LinkedList
// ************
// Solution 1 : Use hashing. Store memory address of the nodes, and then if it is found again, there is a loop. 
// Space Complexity: O(n). [HashMap] 'unordered_set'
// Time Complexity : O(n)
// ************
// Solution 2: Use Slow and Fast Pointers.
// Space Complexity: O(1). Constant
// Time Complexity: O(N). Linear

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

void Solution1(Node* head) {
    // unordered_set because most operations avg O(1) *Constant*
    unordered_set<Node*> nodeAddr;

    Node* temp = head;

    while(temp != NULL) {
        if(nodeAddr.find(temp) != nodeAddr.end()) {
            nodeAddr.insert(temp);
            temp = temp->next_ptr;
        } else {
            cout<<"Loop Exists";
            return;
        }
    }

    cout<<"Loop Doesn't exist";
}

void Solution2(Node* head) {
    Node* slow_ptr = head;
    Node* fast_ptr = head;

    while(fast_ptr != NULL && fast_ptr->next_ptr != NULL) {
        slow_ptr = slow_ptr->next_ptr;
        fast_ptr = fast_ptr->next_ptr->next_ptr;
        if(slow_ptr == fast_ptr) {
            cout<<"Loop exists";
            return ;
        }
    }

    cout<<"Loop Doesn't exist";
}

int main() {

}