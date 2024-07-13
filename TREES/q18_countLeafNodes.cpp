// Question : Count the leaf nodes
// Solution: Perform recursively

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"
using namespace std;

int countLeafNodes(Tree* head) {
    if(head == NULL) {
        return 0;
    }
    if(head->left == NULL && head->right == NULL) {
        return 1;
    }

    return countLeafNodes(head->left)+countLeafNodes(head->right);
}

int main() {

}