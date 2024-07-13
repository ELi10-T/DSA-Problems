// Question : Calculate the vertical Sum of the binary tree
// Use Recursion, send map, fill it

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

void verticalSum(Tree* head, map<int,int> &mp, int parent) {
    if(head == NULL) {
        return ;
    }
    
    mp[parent]+=head->data;

    verticalSum(head->left, mp, parent-1);
    verticalSum(head->right, mp, parent+1);
}

int main() {
    
}