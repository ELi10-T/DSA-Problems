// AUTHOR: Kousthub
// Code Explanation : Calculate factorial using recursion 

#include<bits/stdc++.h>
using namespace std;


// fact(n) = n*n-1*n-2...1
int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }

    return n*fact(n-1);
}

int main() {
    cout<<fact(6)<<"\n";
}
