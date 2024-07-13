// Question : Populate Level Order traversal for the given binary tree
// Solution 1 : Use recursion to generate at every height level
// Solution 2 : Use Queue to generate it

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"
using namespace std;

void levelOrderQueue(Tree* head){
    queue<Tree*> Q;

    Q.push(head);

    while(!Q.empty()) {
        Tree* temp = Q.front();
        Q.pop();
        cout<<temp->data<<"\n";
        if(temp->left) {
            Q.push(temp->left);
        }
        if(temp->right) {
            Q.push(temp->right);
        }
    }
}

void levelOrderHeight(Tree* head) {
    int height = heightOfTree(head);

    for(int i=1;i<=height;i++){
        levelOrderRecursive(head, i);
    }
}

void levelOrderRecursive(Tree* head, int level) {
    if(head == NULL) {
        return;
    }
    if(level == 1) {
        cout<<head<<" ";
    }

    levelOrderRecursive(head->left, level-1);
    levelOrderRecursive(head->right, level-1);
}

int heightOfTree(Tree* head) {
    // TODO: implement it

    return 0;

}

int main() {
    
}