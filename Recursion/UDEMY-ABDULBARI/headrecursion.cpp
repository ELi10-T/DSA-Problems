// AUTHOR: Kousthub
// Code Explanation : Head Recursion Example, "recursive call is first"

#include<bits/stdc++.h>
using namespace std;

void HeadRecursion(int n) {

    if (n > 0) {
        HeadRecursion(n-1); // Similar to increasing loop. Same complexities as tailRecursion.
        cout<<n<<"\n";
    }
}

int main() {
    HeadRecursion(5);
}