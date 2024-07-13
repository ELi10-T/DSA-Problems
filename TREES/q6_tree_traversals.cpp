// Question: Perform Tree Traversals (Depth First Search)
// Inorder, PostOrder, Preorder

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

void preorderTraversal(Tree *head) {
    if(head != NULL) {
        cout<<head->data<<" ";
        preorderTraversal(head->left);
        preorderTraversal(head->right);
    }
}

//  Similar approach for inorder (left, data, right), postorder(left, right, data)

int main() {

}