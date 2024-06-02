// AUTHOR: Kousthub
// Code Explanation : Calculate Power using recursion 

#include<bits/stdc++.h>
using namespace std;


// pow(n,m) = n*n*n*....mtimes
int pow(int n, int m) {
    if(m == 1) {
        return n;
    }

    return n*pow(n,m-1);
}

int main() {
    cout<<pow(2,3)<<"\n";
}
