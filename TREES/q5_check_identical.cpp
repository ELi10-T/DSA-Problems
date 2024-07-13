// Question : Check if two BT trees are identical. 


#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

bool checkIdentical(Tree *head1, Tree* head2) {
    if(head1 == NULL && head2 == NULL) {
        return true;
    }

    if(head1 != NULL && head2 != NULL) {
        return (head1->data == head2->data) && checkIdentical(head1->left, head2->right) &&
        checkIdentical(head1->left, head2->left);
    }
    return false;
}

int main() {

}