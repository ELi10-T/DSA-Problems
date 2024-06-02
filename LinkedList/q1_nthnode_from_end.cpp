// Question: Program for Nth node from the end of a Linked List
// ***********
// Solution 1: 2 iterations, find length and then go to l-n node. 
// Example 1: 
// LL : 1 -> 2 -> 3 -> 4 -> 5. k = 2, Length = 5, 
// Go to l-n node if you start count with 1, or l-n-1 if you start count by 0
// Space Complexity: O(1). Constant
// Time Complexity : O(n+k). 
// ***********
// Solution 2: Always assuming k < n, take two pointers, and start at k difference, when the fast pointer reaches the end, you got your answer. 
// Example 1:
// LL : 1 -> 2 -> 3 -> 4 -> 5. k = 2, Length = 5, 
// When fast pointer crosses position k (2), then start the slow pointer and increment it. 
// Space Complexity: O(1). Constant
// Time Complexity : O(n)   

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

int FirstSolution(Node* head, int k) {
    int count = LengthOfLL(head)-k;
    Node* temp = head;
    for(int i=1;i<=count;i++){
        temp = temp->next_ptr;
    }
    return temp->data;
}

int SecondSolution(Node* head, int k) {
    Node* FastPtr = head;
    Node* SlowPtr = head;
    for(int i=0;i<k-1;i++){
        FastPtr = FastPtr->next_ptr;
    }
    while(FastPtr->next_ptr != NULL){
        FastPtr = FastPtr->next_ptr;
        SlowPtr = SlowPtr->next_ptr;
    }

    return SlowPtr->data;
}

int main(){
    Node *head = ExampleLinkedList(5);
    cout<<FirstSolution(head, 5)<<"\n";
    cout<<SecondSolution(head, 5)<<"\n";
}