// Question : Print the left view of the tree

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

void leftViewOfTree(Tree* head) {
    // Iterate through each level and get the first node

    queue<Tree*> q;

    q.push(head);

    while(!q.empty()) {
        int n = q.size();

        for(int i=0;i<n;i++) {
            Tree* temp = q.front();
            q.pop();
            if(i == 0) {
                cout<<temp->data<<"\n";
            }

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

int main() {

}