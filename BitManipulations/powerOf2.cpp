#include<bits/stdc++.h>
using namespace std; 

bool powerOfTwo_Soln(int n) {
    if((n & (~(n-1))) == n) {
        return true;
    }
    return false;
}

int main(){
    int n = 64;
    cout<<"Is it a power of 2 : "<<n<<" "<<powerOfTwo_Soln(n)<<"\n";
}