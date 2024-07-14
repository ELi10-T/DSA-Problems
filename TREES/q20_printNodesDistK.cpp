// Question : Print nodes at K distance from root

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

void kDistNodes(Tree* head, int k, int dist){
    if(head == NULL) {
        return ;
    }

    if(dist == k) {
        cout<<head->data<<"\n";
        return;
    }

    kDistNodes(head->left, k, dist+1);
    kDistNodes(head->right, k, dist+1);
}
// if you do not want recursion, use level order traversal

int main() {

}