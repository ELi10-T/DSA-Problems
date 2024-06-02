#include<bits/stdc++.h>
using namespace std;

int pow_soln(int x, int n) {

    if(n == 0){
        return 1;
    }

    int ans = 1;
    // Algorithm: if power is divisible by 2 => (ans)^2n = (ans*ans)^n
    //            if power is not divisible by 2 => (ans)^2n+1 = ans^2n * ans

    while(n != 0){
        if(n%2 == 0){
            x = x*x;
            n/=2;
        } else {
            ans = ans*x;
            n-=1;
        }
    } 

    return ans;
}

int main(){
    int x = 2;
    int y = 5;
    cout<<"X : "<<x<<" Power : "<<y<<" "<<pow_soln(x,y)<<"\n";
}