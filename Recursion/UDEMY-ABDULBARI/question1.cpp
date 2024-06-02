// AUTHOR: Kousthub
// Code Explanation : Calculate sum of natural numbers using recursion 

#include<bits/stdc++.h>
using namespace std;

// Sum(n) = n+n-1+n-2.....1

int Sum(int n){
    if(n < 1) {
        return 0;
    } 

    return n+Sum(n-1);
}

int main(){
    cout<<Sum(6)<<"\n";
}