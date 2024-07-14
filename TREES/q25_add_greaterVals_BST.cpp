// Question : Add Greater number to the current node

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

void addGreaterVals(Tree* head, int *max) {
    // perform reverse inorder and then add them

    if(head == NULL) {
        return;
    }

    addGreaterVals(head->right, max);

    head->data = head->data+*max;
    *max = head->data;

    addGreaterVals(head->left, max);
}

int main() {

}