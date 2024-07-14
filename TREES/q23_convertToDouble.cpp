// Question : Convert the Binary tree into Double tree

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

void convertToDouble(Tree* head) {
    // perform post order, and attach the node next

    if(head == NULL) {
        return ;
    }

    convertToDouble(head->left);
    convertToDouble(head->right);

    Tree* temp = head->left;
    head->left = new Tree(head->data);
    head->left->left = temp;
}

int main() {

}