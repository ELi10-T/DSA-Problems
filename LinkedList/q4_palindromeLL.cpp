// Question : Function to check if a singly linked list is palindrome
// ************
// Solution 1 : Take a stack, push all elements data into stack, and then traverse through the 
//              LL and pop the stack and check if they are equal. 
// Space Complexity : O(n)
// Time Complexity : O(n), ( O(2*n) )
// ************
// Solution 2 : Similar to the above approach, use recursion. 
// Space Complexity : O(n), recursive stack
// Time Complexity : O(n), single traversal
// ************
// Solution 3 : Reverse the LL from last to middle, then traverse 
// Space Complexity : O(1) constant
// Time Complexity : O(n)

#include<bits/stdc++.h>
#include "basic_operations_LL.h"

using namespace std;

bool FirstSolution(Node* head) {
    stack<int> st;
    Node* temp = head;

    while(temp != NULL) {
        st.push(temp->data);
        temp = temp->next_ptr;
    }

    temp = head;
    while(temp != NULL) {
        int num = st.top();
        if(num != temp->data) {
            return false;
        }
        st.pop();
        temp = temp->next_ptr;
    }
    return true;
}

bool SecondSolution(Node* head) {
    // How to use recursion? , WIP
}

bool ThirdSolution(Node *head) {
    // For this solution use slow_ptr, fast_ptr to traverse to the middle of the LL, 
    // Reverse the second part of the LL. 
    // Compare first to middle to middle to end.

    // Ex : 1->2->3->4->5->6 => slow_ptr = 4, fast_ptr = NULL
    // Ex : 1->2->3->4->5 => slow_ptr = 3, fast_ptr = 5;

    Node* slow_ptr = head;
    Node* fast_ptr = head;

    // Finding Middle of the LinkedList
    // Catch is if it is even, then you can directly reverse it. 
    // If it is odd, you have to go to the next node and reverse it. 
    // To find out if it is even, fast_ptr will go to NULL pointer
    // To find out if it is odd, fast_ptr will go to last node. 
    Node* prevSlow = slow_ptr;

    while(fast_ptr != NULL && fast_ptr->next_ptr != NULL) {
        prevSlow = slow_ptr;
        slow_ptr = slow_ptr->next_ptr;
        fast_ptr = fast_ptr->next_ptr->next_ptr;
    }

    // odd case
    if(fast_ptr != NULL && fast_ptr->next_ptr == NULL) {
        prevSlow = slow_ptr;
        slow_ptr = slow_ptr->next_ptr;
    }

    // Reversing the second part of the LinkedList
    Node* last = ReverseLinkedList(slow_ptr);
    // prevSlow->next_ptr = last;
    prevSlow->next_ptr = NULL;

    Node* temp1 = head;
    Node* temp2 = last;

    while(temp2 != NULL) {
        if(temp1->data != temp2->data) {
            return false;
        }
        temp1 = temp1->next_ptr;
        temp2 = temp2->next_ptr;
    }

    // Reverting the reverse again
    last = ReverseLinkedList(last);
    prevSlow->next_ptr = last;
    // PrintLL(head);

    return true;
}

Node* PalindromicLinkedList() {
    Node* head = new Node(1);
    head->next_ptr = new Node(2);
    head->next_ptr->next_ptr = new Node(3);
    head->next_ptr->next_ptr = new Node(2);
    head->next_ptr->next_ptr->next_ptr = new Node(1);

    return head;
}

int main(){
    Node* head = PalindromicLinkedList();
    cout<<"First Solution : "<<FirstSolution(head)<<"\n";
    cout<<"Third Solution : "<<ThirdSolution(head)<<"\n";
}
 