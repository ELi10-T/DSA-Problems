// Question : Calculate the size of a tree. i.e Number of nodes

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

int sizeOfTree(Tree* head) {
    if(head == NULL) {
        return 0;
    }
    if(head->left == NULL && head->right == NULL) {
        return 1;
    }

    return 1+sizeOfTree(head->left)+sizeOfTree(head->right);
}

int main() {

}