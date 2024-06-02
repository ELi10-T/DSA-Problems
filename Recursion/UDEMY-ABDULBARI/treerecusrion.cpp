// AUTHOR: Kousthub
// Code Explanation : Tree Recursion Example, multiple recursion calls. 
// Time Complexity: O(2^n). Space Complexity: O(n).

#include<bits/stdc++.h>
using namespace std;

void TreeRecursion(int n) {
    if(n > 0) {
        TreeRecursion(n-1);
        cout<<n<<"\n";
        TreeRecursion(n-1);
    }
}

int main() {
    TreeRecursion(5);
}