// Question : make the next pointer point to inorder successor
// Solution : Do reverse inorder traversal and assign the older node to next

#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
    node* next;
};

void reverseInorder(node* head) {
    
    static node* next_node = NULL; 

    if(head != NULL) {
        reverseInorder(head->right);

        head->next = next_node;
        next_node = head;

        reverseInorder(head->left);
    }
}

int main() {

}