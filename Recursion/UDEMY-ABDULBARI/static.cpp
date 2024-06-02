// AUTHOR: Kousthub
// Code Explanation : Using Static/Global variables in recursion

#include<bits/stdc++.h>
using namespace std;


int staticFunc(int n) {
    static int x = 0;

    if (n > 0) {
        x++;
        return staticFunc(n-1)+x;     // Goes to the tail of the tree first and then will calculate x backwards,
                                      // For ex : F(5) ==> 5+5+5+5+5 = 25
    }
    return 0;
}

int main() {
    cout<<staticFunc(5)<<"\n";
}

