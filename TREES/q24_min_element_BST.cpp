// Question : Find a node with minimum value in a BST

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

int minValBST(Tree* head) {
    if(head == NULL) {
        return 0;
    }

    Tree* temp = head;

    while(temp->left != NULL) {
        temp = temp->left;
    }

    return temp->data;
}

int main() {

}