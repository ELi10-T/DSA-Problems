// Question : The problem is to find the common nodes of two sorted linkedLists
// **********
// Solution : Traverse through each LL, and then if nodes match forward both. 
//            Forward to next node only if the current list has smaller number. Keep doing it until NULL.
// Time Complexity : O(n+m)
// Space Complexity : O(n), the result Linked List
// Example : LL1 : 1->2->3->4->5, LL2 : 2->4->5, Ans : 2->4->5

#include<bits/stdc++.h>
#include<basic_operations_LL.h>
using namespace std;

Node* Solution(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* res = NULL;

    while(temp1 != NULL && temp2 != NULL) {
        if(temp1->data == temp2->data) {
            // If you do not want this if condition, initialize with dummy node and return next node
            if(res == NULL) { 
                res = new Node(temp1->data);
            } else {
                res->next_ptr = new Node(temp1->data);
            }
        } else if(temp1->data < temp2->data) {
            temp1 = temp1->next_ptr;
        } else {
            temp2 = temp2->next_ptr;
        }
    }

    return res;
}

int main() {

}