// Question : Find the Lowest Common Ancestor for two nodes in the binary tree
// ****IMP QUESTION****
#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

Tree* findLCASingleRecursion(Tree* head, int n1, int n2) {

    if(head == NULL) {
        return NULL;
    }

    if(head->data == n1 || head->data == n2) {
        return head;
    }

    Tree* findLeft = findLCASingleRecursion(head->left, n1, n2);
    Tree* findRight = findLCASingleRecursion(head->right, n1, n2);

    if(findLeft && findRight) {
        return head;
    }

    return (findLeft == NULL) ? findRight : findLeft;

}

bool findPath(Tree* head, vector<Tree*> &path, int n1) {

    if(head == NULL) {
        return false;
    }

    path.push_back(head);

    if(head->data == n1) {
        return true;
    }

    if((head->left) && findPath(head->left, path, n1) || (head->right) && findPath(head->right, path, n1)) {
        return true;
    }

    path.pop_back();
    return false;
}

Tree* findLCA(Tree* head, int n1, int n2) {
    vector<Tree*> path1, path2;

    if (!findPath(head, path1, n1) || findPath(head, path2, n2)) {
        return NULL;
    }

    // traverse through both paths until mismatch
}

int main() {

}