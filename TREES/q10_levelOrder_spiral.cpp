// Question : Print Level Order traversal in spiral way
// Solution : Use 2 stacks

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"
using namespace std;

void levelOrderSpiral(Tree* head) {
    stack<Tree*> s1, s2;

    s1.push(head);
    
    while(!(s1.empty()) || !(s2.empty())) {

        while(!s1.empty()){
            Tree* temp = s1.top();
            s1.pop();
            cout<<temp->data<<" ";
            if(temp->left) {
                s2.push(temp->left);
            }
            if(temp->right) {
                s2.push(temp->right);
            }
        }

        while(!s2.empty()){
            Tree* temp = s2.top();
            s2.pop();
            cout<<temp->data<<" ";
            if(temp->right) {
                s2.push(temp->right);
            }
            if(temp->left) {
                s2.push(temp->left);
            }
        }

    }
}

int main() {

}
