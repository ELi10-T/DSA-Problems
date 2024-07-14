// Question : Find Inorder Successor in BST
// Important Question
#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

// Assume you already have the node and find the inorder successor

Tree* inorderSuccessor(Tree* head, Tree* node) {
    if(node != NULL && node->right) {
        Tree* temp = node->right;
        while(temp->left) {
            temp = temp->left;
        }
        return temp;
    }

    Tree* succ = NULL;
    Tree* temp = head;

    while(temp->data != node->data) {
        if(node->data < head->data) {
            succ = temp;
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    return succ;
}

int main() {

}