// This code has basic operations of Trees
#include<bits/stdc++.h>

// All are assumed to be binary tree
class Tree {
    public: 
        int data;
        Tree *left;
        Tree *right;
        Tree(int d) {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};