// Question : Check if the leaves are on same level
// Solution : Go to a leaf, and get the level, check if all leaves have same level


#include<bits/stdc++.h>
#include "basic_operations_TREES.h"
using namespace std;

bool checkSameLevel(Tree* head, int level) {
    static int leafLevel = 0;
    
    if(head == NULL) {
        return true;
    }
    
    if(head->left == NULL && head->right == NULL) {
        // First leaf
        if(leafLevel == 0) {
            leafLevel = level;
            return true;
        } 

        return leafLevel == level;
    }

    return checkSameLevel(head->left, level+1) == true && checkSameLevel(head->right, level+1) == true;
}

int main() {

}

