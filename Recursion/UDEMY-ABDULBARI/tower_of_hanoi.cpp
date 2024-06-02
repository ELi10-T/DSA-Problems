#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int pegs, string A, string B, string C) {
    if(pegs < 1) {
        return;
    }
    // A - initial tower, B - Middle Tower, C - Final Tower.
    towerOfHanoi(pegs-1, A, C, B);
    cout<<"Transfered this peg : "<<pegs<<" to tower: "<<C<<"\n";
    towerOfHanoi(pegs-1, B, A, C);
}

int main() {
    towerOfHanoi(3,"A", "B", "C");
}