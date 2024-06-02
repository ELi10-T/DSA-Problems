#include<bits/stdc++.h>
using namespace std;


// Easy O(n) soln - Calculate factorial somewhere, and then multiply/substract here.
// Reursive func - Pascals triangle
//                  1
//              1       1
//          1       2       1
//      1       3       3       1               
int NCR(int n, int r) {
    if(r == 0 || r == n) {
        return 1;
    }

    return NCR(n-1,r-1)+NCR(n-1,r); 
}

int main(){
    cout<< NCR(3,2)<<"\n";
}