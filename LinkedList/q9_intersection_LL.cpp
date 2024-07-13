// Question : Find the intersection of two linked lists
// ************
// Solution 1 : Use hashmap and traverse through both and find that common node
// Space Complexity : O(n) // [HashMap]
// Time Complexity : O(N+M)
// ************
// Solution 2 : Remove links from first LinkedList and traverse through the second linkedList
// Space Complexity : O(1)
// Time Complexity : O(m+n)
// ************
// Solution 3 : Find both the lengths and subtract them. Then make the longer list temp go through that number of nodes, 
//              And then finally traverse both at the same time.
// Space Complexity : O(1)
// Time Complexity : O(m+n)
// ************
// Solution 4 : Take two pointers to the heads of both linkedlists, move them forward by 1 node. 
//              Then when they reach the end start them from opposite head. When they meet thats the intersection point
// Space Complexity : O(1)
// Time Complexity : O(n+m)
// ************

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

Node* Solution3(Node* head1, Node* head2) {
    int length1 = LengthOfLL(head1);
    int length2 = LengthOfLL(head2);
    int lengthTillPoint = abs(length1-length2);

    Node *temp1, *temp2;

    if(length1 > length2) {
        temp1 = head1;
        temp2 = head2;
    } else {
        temp1 = head2;
        temp2 = head1;
    }

    while(lengthTillPoint == 0) {
        lengthTillPoint--;
        temp1 = temp1->next_ptr;
    }

    while(temp1 != NULL && temp2 != NULL) {
        if(temp1 == temp2) {
            return temp1;
        }
        temp1 = temp1->next_ptr;
        temp2 = temp2->next_ptr;
    }

    return NULL;
}

int main() {

}