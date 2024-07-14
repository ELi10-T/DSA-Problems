// Question : Least Common Ancestor for BST

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

Tree* lcaBST(Tree* head, int n1, int n2) {
    // check if lca is on the left subtree or right
    if(head == NULL) {
        return head;
    }

    if(n1 < head->data && n2 < head->data) {
        lcaBST(head->left, n1, n2);
    } else if(n1 > head->data && n2 > head->data) {
        lcaBST(head->right, n1, n2);
    }

    return head;
}

int main() {

}