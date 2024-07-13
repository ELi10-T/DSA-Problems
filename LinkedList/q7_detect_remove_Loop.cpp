// Question : Detect and remove the loop caused by linkedList
// **********
// Solution 1: Use Slow and Fast Pointer. Find the point where they are
//             Equal, call this mid-point. Then take one pointer to the beginning
//             And continue one step forward for both pointers, the point where they meet is the 
//             beginning of the loop. 
// Space Complexity : O(1)
// Time Complexity : O(n)

#include<bits/stdc++.h>
#include "basic_operations_LL.h"
using namespace std;

void Solution1(Node* head) {
    Node* slow_ptr = head;
    Node* fast_ptr = head;

    bool isLoop = false;

    while(fast_ptr != NULL && slow_ptr != NULL) {
        slow_ptr = slow_ptr->next_ptr;
        fast_ptr = fast_ptr->next_ptr->next_ptr;

        if(slow_ptr == fast_ptr) {
            isLoop = true;
            break;
        }
    }

    if(isLoop == false) {
        cout<<"No Loop\n";
        return ;
    }

    fast_ptr = head;

    while(fast_ptr->next_ptr != slow_ptr->next_ptr) {
        fast_ptr = fast_ptr->next_ptr;
        slow_ptr = slow_ptr->next_ptr;
    }

    fast_ptr->next_ptr = NULL;
}

int main() {
    
}