// Question: Boundary Traversal
// Solution : Print left side, leaves, and right side
// 1 . Print left side until leaf
// 2 . Print the leaves in inorder, gives them left to right
// 3. Use stack to print right side of tree until leaf


#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

void printLeftSide(Tree* head) {
    if(head == NULL) {
        return;
    }
    if(head->left != NULL) {
        cout<<head->data<<"\n";
        printLeftSide(head->left);
    } else if (head->right != NULL) {
        cout<<head->right<<"\n";
        printLeftSide(head->right);
    }
}

void printRightSide(Tree* head) {
    if(head == NULL) {
        return;
    }

    if(head->right != NULL) {
        cout<<head->data<<"\n";
        printRightSide(head->right);
    } else if(head->left != NULL) {
        cout<<head->data<<"\n";
        printRightSide(head->left);
    } 
}

void printLeafNodes(Tree* head) {
    if(head == NULL) {
        return;
    }
    printLeafNodes(head->left);
    if(head->left == NULL && head->right == NULL) {
        cout<<head->data<<"\n";
    }
    printLeafNodes(head->right);
}

int main() {


}