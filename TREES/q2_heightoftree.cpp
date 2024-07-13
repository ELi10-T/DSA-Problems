// Question : Find the height of the tree

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

int heightOfTree(Tree *head) {
    if(head == NULL) {
        return 0;
    }
    if(head->left == NULL && head->right == NULL) {
        return 1;
    }

    int heightOfLeft = heightOfTree(head->left);
    int heightOfRight = heightOfTree(head->right);

    return heightOfLeft>heightOfRight?heightOfLeft+1:heightOfRight+1;
}

int main(){

}