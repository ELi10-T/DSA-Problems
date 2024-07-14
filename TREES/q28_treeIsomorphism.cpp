// Question : Check if two trees are isomorphic

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

bool isIsoMorphic(Tree* head1, Tree* head2) {
    
    if(head1 == NULL && head2 == NULL) {
        return true;
    }
    
    if(head1 == NULL || head2 == NULL) {
        return false;
    }

    if(head1->data != head2->data) {
        return false;
    }

    return (isIsoMorphic(head1->left, head2->left) && isIsoMorphic(head1->right, head2->right)) ||
    (isIsoMorphic(head1->left, head2->right) && isIsoMorphic(head1->right, head2->left));
}

int main() {

}