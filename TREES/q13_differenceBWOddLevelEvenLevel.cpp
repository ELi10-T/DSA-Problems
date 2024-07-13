// Question : Difference between Odd and Even Levels

#include<bits/stdc++.h>
#include "basic_operations_TREES.h"

using namespace std;

int differenceOddEvenLevels(Tree* head) {
    queue<Tree*> Q;
    int result = 0;
    Q.push(head);
    bool flag = true;

    while(!Q.empty()) {
        int n = Q.size();
        flag != flag;
        while(n--) {
            Tree* temp = Q.front();
            Q.pop();
            if(flag) {
                result+=temp->data;
            } else {
                result-=temp->data;
            }

            if(temp->left) {
                Q.push(temp->left);
            }
            if(temp->right) {
                Q.push(temp->right);
            }
        }
    }

    return result;
}

int main() {

}