// Question  : Print Level Order traversal in reverse

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

// Stack, Queue method

void reverseLevelOrder(Tree* head) {
    queue<Tree*> Q;
    stack<Tree*> st;

    Q.push(head);
    st.push(head);

    while(!Q.empty()) {
        Tree* temp = Q.front();
        Q.pop();

        if(temp->right) {
            st.push(temp->right);
            Q.push(temp->right);
        }
        if(temp->left) {
            st.push(temp->left);
            Q.push(temp->left);
        }

    }

    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main() {

}