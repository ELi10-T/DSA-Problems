// Question : Delete a tree
// Solution : Generally PostOrder is used to delete a tree, because it will come from bottom-up


#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

void deleteTree(Tree* head) {
    if(head == NULL) {
        return ;
    }

    deleteTree(head->left);
    deleteTree(head->right);

    delete(head);
}

int main() {


}