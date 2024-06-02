// AUTHOR: Kousthub
// Code Explanation : Tail Recursion Example, "recursive call is last"

#include<bits/stdc++.h>
using namespace std;

void tailRecursion(int n) {
    if (n > 0) {
        cout<<n<<"\n";
        tailRecursion(n-1); // Only recursion no operations in this.
                            // Almost similar to decreasing loop. O(n).
                            // Space Complexity, O(n) since it uses stack. 
    }
}

int main() {
    tailRecursion(5);
}