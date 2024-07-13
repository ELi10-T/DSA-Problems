// Question : Find the diameter of the BT

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

int heightOfTree(Tree* head) {
    if(head == NULL) {
        return 0;
    }

    int heightOfLeftTree = heightOfTree(head->left);
    int heightOfRightTree = heightOfTree(head->right);

    return heightOfLeftTree>heightOfRightTree?heightOfLeftTree+1:heightOfRightTree+1;
}

int diameterOfTree(Tree *head) {
    // max of left diameter, right diameter, or leftheight+rightheight+1

    if(head == NULL) {
        return 0;
    }

    int diameterLeft = diameterOfTree(head->left);
    int diameterRight = diameterOfTree(head->right);

    int heightLeft = heightOfTree(head->left);
    int heightRight = heightOfTree(head->right);

    return max(max(diameterLeft, diameterRight), 1+heightLeft+heightRight);
}

int main() {

}